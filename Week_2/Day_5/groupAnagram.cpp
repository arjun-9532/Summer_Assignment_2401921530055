#include <bits/stdc++.h>
using namespace std;
vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector<unordered_map<char,int>> m(strs.size());

        for(int i = 0; i < strs.size(); i++) {
            for(char ch : strs[i]) {
                m[i][ch]++;
            }
        }

        vector<vector<string>> b;
        vector<bool> visited(strs.size(), false);

        for(int i = 0; i < strs.size(); i++) {

            if(visited[i]) continue;

            vector<string> group;
            group.push_back(strs[i]);
            visited[i] = true;

            for(int j = i + 1; j < strs.size(); j++) {

                if(!visited[j] && m[i] == m[j]) {
                    group.push_back(strs[j]);
                    visited[j] = true;
                }
            }

            b.push_back(group);
        }

        return b;
    }