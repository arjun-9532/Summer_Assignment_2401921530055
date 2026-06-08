#include <bits/stdc++.h>
using namespace std;
    bool isAnagram(string s, string t) {
       unordered_map<char,int> ms;
       unordered_map<char,int> mt;
       for(char i : s){
           ms[i]++;
       }
       for(char i:t){
        mt[i]++;
       }
       if(ms==mt){
        return true;
       }
       else{
        return false;
       }
    }
