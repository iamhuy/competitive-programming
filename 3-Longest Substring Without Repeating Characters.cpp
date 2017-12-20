#include<bits/stdc++.h>

using namespace std;


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int i = 0;
        int j = 0;
        int res = 0;
        set<char> q;
        while (i<n && j<n) {
            if (q.find(s[j])==q.end()) {
                q.insert(s[j]);
                res = max(res,j-i+1);
                j++;
            } else {
                while (s[i] != s[j]) {
                    q.erase(s[i]);
                    i++;
                }
                q.erase(s[i]);
                i++;
                q.insert(s[j]);
                j++;
            }
        }

        return res;
    }
};

int main() {
    Solution* sol = new Solution();
    string s = "abcdedab";
    cout << sol->lengthOfLongestSubstring(s);

}
