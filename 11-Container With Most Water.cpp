#include<bits/stdc++.h>

using namespace std;


class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();

        int i = 0;
        int res = 0;
        while (i < n) {
            int j = i + 1;
            int sum = 0;
            while (j < n && height[j] < height[i]) {
                sum+= height[j];
                j++;
            }
            if (j == n) break;
            res+= (j-i-1)*height[i] - sum;
            i = j;
        }

        reverse(height.begin(), height.end());

        i = 0;
        while (i < n) {
            int j = i + 1;
            int sum = 0;
            while (j < n && height[j] <= height[i]) {
                sum+= height[j];
                j++;
            }
            if (j == n) break;
            res+= (j-i-1)*height[i] - sum;
            i = j;
        }


        return res;
    }
};
int main() {
    Solution* sol = new Solution();
    vector<int> a = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout << sol->trap(a);

}

