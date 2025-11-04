int SingleNonDuplicate(vector<int>& nums)
{
    int n = nums.size();
    
    // Edge cases: single element or unique at boundaries
    if (n == 1) return nums[0];
    if (nums[0] != nums[1]) return nums[0];
    if (nums[n-1] != nums[n-2]) return nums[n-1];
    
    // Standard binary search on middle elements
    int left = 1, right = n - 2;
    while (left <= right) {
        int mid = (left + right) >> 1;
        
        if (nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1]) {
            return nums[mid];  // Found the single element
        }
        
        // Determine which half to search
        if ((mid % 2 == 0 && nums[mid] == nums[mid+1]) ||
            (mid % 2 == 1 && nums[mid] == nums[mid-1])) {
            left = mid + 1;  // Single element on right
        } else {
            right = mid - 1;  // Single element on left
        }
    }
    return -1;
}
