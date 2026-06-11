#include <bits/stdc++.h>
using namespace std;
string decodeString(string s) {
        stack<int> nums;
        stack<string> c;

        string curr = "";
        int num = 0;

        for (char ch : s) {

            if (isdigit(ch)) {
                num = num * 10 + (ch - '0');
            }

            else if (ch == '[') {
                nums.push(num);
                c.push(curr);

                num = 0;
                curr = "";
            }

            else if (ch == ']') {
                int repeat = nums.top();
                nums.pop();

                string prev = c.top();
                c.pop();

                string temp = "";

                for (int i = 0; i < repeat; i++) {
                    temp += curr;
                }

                curr = prev + temp;
            }

            else {
                curr += ch;
            }
        }

        return curr;
    }