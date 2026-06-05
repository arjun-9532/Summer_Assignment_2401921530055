#include <bits/stdc++.h>
using namespace std;
string longestCommonPrefix(vector<string>& strs) {
        string a=strs[0];
                 

      for(int i=a.length();i>=0;i--){
        string prefix=a.substr(0,i);
          bool valid=true;
        for(int j=1 ; j<strs.size(); j++){
            if(strs[j].find(prefix)!=0){
                valid=false;
                break;
            }
        }
      
        if(valid){
            return prefix;
        }
      }
        
            return "";
        
      }