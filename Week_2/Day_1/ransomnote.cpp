#include<bits/stdc++.h>
using namespace std;
bool canConstruct(string ransomNote, string magazine) {
      unordered_map<char,int> m;
      for(char ch : magazine ){
        m[ch]++;
      }
      for(char ch:ransomNote){
        if(m[ch]==0){
          return false;
        }
        else{
            m[ch]--;
        }
      }
      return true;
    }