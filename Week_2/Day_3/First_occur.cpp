#include<bits/stdc++.h>
using namespace std;
int strStr(string haystack, string needle) {
        string s;
        int k=needle.length();
        for(int i=0 ; i<k ;i++){
          s=s+haystack[i];
        }
        int left=0;
        if(s==needle){
            return 0;
        }
        for(int right=k ; right<haystack.length() ; right++){
             s.erase(0,1);
             left++;
             s=s+haystack[right];
             if(s==needle){
                return right-k+1;
             }
        }
           return -1;
    }
