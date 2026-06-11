 #include <bits/stdc++.h>
 using namespace std;
 vector<string> ans;
    void combination(string curr , int o , int c , int n){
      if(curr.length()==2*n){
        ans.push_back(curr);
        return;
      }
      if(o<n){
        combination(curr+'(',o+1,c,n);
      }
      if(c<o){
        combination(curr+')',o,c+1,n);
      }
    }
    vector<string> generateParenthesis(int n) {
        combination("",0,0,n);
        return ans;
    }