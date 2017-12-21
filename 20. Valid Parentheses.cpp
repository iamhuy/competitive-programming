#include<bits/stdc++.h>

using namespace std;



class Solution {
    public:
        bool isValid(string s) {
            int n = s.length();
            stack<char> a;
            for (int i=0;i<n;i++) {
                if (s[i] == '[') a.push('['); else
                if (s[i] == '{') a.push('{'); else
                if (s[i] == '(') a.push('('); else
                if (s[i] == ']') {
                    if (a.empty() || a.top() != '[') return false;
                    a.pop();
                } else
                if (s[i] == '}') {
                    if (a.empty() || a.top() != '{') return false;
                    a.pop();
                } else
                if (s[i] == ')') {
                    if (a.empty() || a.top() != '(') return false;
                    a.pop();
                }
            }

            return (a.empty());
        }
};

int main() {
    Solution* sol = new Solution();
    cout << sol->isValid("[{}(({}{}[][])){}]");
}

