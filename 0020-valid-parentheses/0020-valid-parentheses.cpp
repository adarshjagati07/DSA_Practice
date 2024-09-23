#include <bits/stdc++.h>

class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;

        for (char c : s) {
            // If it's an opening bracket, push it onto the stack
            if (c == '(' || c == '{' || c == '[') {
                stk.push(c);
            }
            // If it's a closing bracket, check the top of the stack
            else {
                // If stack is empty or top of the stack doesn't match, return false
                if (stk.empty() || (c == ')' && stk.top() != '(') ||
                    (c == '}' && stk.top() != '{') || (c == ']' && stk.top() != '[')) {
                    return false;
                }
                // If it matches, pop the opening bracket from the stack
                stk.pop();
            }
        }
        // If the stack is empty at the end, all brackets were matched
        return stk.empty();
    }
};
