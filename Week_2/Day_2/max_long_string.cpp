#include <bits/stdc++.h>
using namespace std;
    int lengthOfLongestSubstring(string s) {
        int max_length=INT_MIN;
        unordered_map<char,int>m;
        int length=0;
        for(int i=0 ; i<s.length() ; i++){
            char ch=s[i];
            if(m[ch]!=0){
              length=0;
              m.erase(ch);
            }
             else{
              length=length+1;
            }

            max_length=max(max_length,length);

            m[ch]++;
        }
        return max_length;
       
    }
