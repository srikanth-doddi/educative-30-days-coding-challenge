#include <vector>
#include <algorithm>
using namespace std;

int minEatingSpeed(vector<int>& piles, int h) {
    int left = 1;
    int right = *max_element(piles.begin(), piles.end());
    
    // Edge case: if we have as many hours as piles, answer is max pile
    if (h == piles.size()) return right;
    
    while (left < right) {
        int mid = left + ((right - left) >> 1);  // Bit shift for division by 2
        long long hours = 0;
        
        for (int pile : piles) {
            hours += (pile + mid - 1) / mid;
            if (hours > h) goto too_slow;  // Faster than break + check
        }
        
        right = mid;  // Valid speed, try smaller
        continue;
        
        too_slow:
        left = mid + 1;  // Too slow, need faster
    }
    
    return left;
}
