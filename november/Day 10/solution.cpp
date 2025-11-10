#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> GroupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> groups;
    groups.reserve(strs.size() * 2); // fewer rehashes
    groups.max_load_factor(0.7f);

    for (const string& s : strs) {
        // 26-byte signature: key[i] = count of 'a' + i
        string key(26, '\0');
        for (char c : s) key[c - 'a']++;

        groups[key].push_back(s);
    }

    vector<vector<string>> result;
    result.reserve(groups.size());
    for (auto& kv : groups) result.push_back(std::move(kv.second));
    return result;
}
