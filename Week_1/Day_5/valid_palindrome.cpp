 #include <bits/stdc++.h>
 using namespace std;
 bool isPalindrome(string s) {
        for(char &c :s){
            c=tolower(c);
        }
        string a;
        string b;
        for(char c :s){
            if( c>='a' && c<='z' || c>='0' && c<='9'){
            a.push_back(c);
            }
        }
        
        for(int i= a.length()-1;i>=0;i--){
            b.push_back(a[i]);
        }
        if(a==b){
            return true;
        }
        else{
            return false;
        }

    }