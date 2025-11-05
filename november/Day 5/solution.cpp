#include <iostream>
#include <vector>
#include <functional>

using namespace std;

vector<int> LoudAndRich(vector<vector<int>> richer, vector<int> quiet)
{
    int n = quiet.size();
    
    // Build adjacency list: graph[i] contains all people RICHER than person i
    vector<vector<int>> graph(n);
    for (auto& r : richer) {
        graph[r[1]].push_back(r[0]); // r[0] is richer than r[1]
    }
    
    // result[i] will store the quietest person among all people >= wealth of person i
    vector<int> result(n, -1);
    
    // DFS with memoization
    function<int(int)> dfs = [&](int person) -> int {
        // If already computed, return cached result
        if (result[person] != -1) {
            return result[person];
        }
        
        // Initially, the person themselves is the quietest candidate
        result[person] = person;
        
        // Check all people richer than current person
        for (int richerPerson : graph[person]) {
            int candidate = dfs(richerPerson);
            
            // Update if we found someone quieter
            if (quiet[candidate] < quiet[result[person]]) {
                result[person] = candidate;
            }
        }
        
        return result[person];
    };
    
    // Compute answer for each person
    for (int i = 0; i < n; i++) {
        dfs(i);
    }
    
    return result;
}
