#include <bits/stdc++.h>
using namespace std;
bool repeatedSubstringPattern(string s) {

    int l = s.length();

  for(int i = 1; i <= l/2; i++) {

        if(l % i != 0)
            continue;

        string a= s.substr(0, i);

        string temp = "";

        int t= l / i;

        for(int j = 0; j < t; j++) {
            temp += a;
        }

        if(temp == s)
            return true;
    }

    return false;
}
    