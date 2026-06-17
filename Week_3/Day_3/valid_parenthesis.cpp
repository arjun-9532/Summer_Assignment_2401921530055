#include<bits/stdc++.h>
using namespace std;
bool isValid(string s) {
         stack<char> stack;

        for (char ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') {
                stack.push(ch);
            }
            else {
                if (stack.empty()) return false;

                if ((ch == ')' && stack.top() != '(') ||
                    (ch == '}' && stack.top() != '{') ||
                    (ch == ']' && stack.top() != '[')) {
                    return false;
                }

                stack.pop();
            }
        }

        return stack.empty();
    }