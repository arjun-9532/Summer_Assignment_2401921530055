#include <bits/stdc++.h>
using namespace std;
vector<int> findAnagrams(string s, string p) {

        vector<int> ans;

        if (p.length() > s.length())
            return ans;

        unordered_map<char,int> mp;
        unordered_map<char,int> window;

        for(char ch : p)
            mp[ch]++;

        int k = p.length();
        for(int i=0;i<k;i++)
            window[s[i]]++;

        if(mp == window)
            ans.push_back(0);

        for(int i=k;i<s.length();i++){

            char add = s[i];
            char remove = s[i-k];

            window[add]++;

            window[remove]--;

            if(window[remove] == 0)
                window.erase(remove);

            if(mp == window)
                ans.push_back(i-k+1);
        }

        return ans;
    }