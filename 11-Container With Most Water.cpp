#include<bits/stdc++.h>

using namespace std;


class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i = 0;
        int j = n-1;
        int res = 0;
        while (i < j) {
            res = max(res, min(height[i], height[j])*(j-i));
            if (height[i] < height[j]) i++; else j--;
        }
        return res;
    }
};
int main() {
    Solution* sol = new Solution();
    vector<int> a = {9,2,6,1};
    cout << sol->maxArea(a);

}

