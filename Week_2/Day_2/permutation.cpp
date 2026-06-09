 #include <bits/stdc++.h>
 using namespace std;
 bool checkInclusion(string s1, string s2) {

        if(s1.length() > s2.length())
            return false;

        unordered_map<char,int> m1;
        unordered_map<char,int> m2;

        for(char ch : s1)
            m1[ch]++;

        int k = s1.length();
        for(int i=0; i<k; i++)
            m2[s2[i]]++;

        if(m1 == m2)
            return true;

        for(int i=k; i<s2.length(); i++){

            char add = s2[i];
            char remove = s2[i-k];

            m2[add]++;

            m2[remove]--;

            if(m2[remove] == 0)
                m2.erase(remove);

            if(m1 == m2)
                return true;
        }

        return false;
    }