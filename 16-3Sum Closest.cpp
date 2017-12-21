#include<bits/stdc++.h>

using namespace std;



class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int res = 10000000000;
        int res2 = 0;
        int n = nums.size();

        for (int k=0;k<n-2;k++) {
            int x = nums[k];
            int i = k+1;
            int j = n-1;
            while (i<j) {
                if (nums[i]+nums[j]+x-target==0) {
                    return nums[i]+nums[j]+x;
                }
                else if (nums[i]+nums[j]+x -target > 0) {
                    if (abs(nums[i]+nums[j]+x -target) < res) {
                        res = abs(nums[i]+nums[j]+x -target);
                        res2 = nums[i]+nums[j]+x;
                    }
                    j--;
                }
                else if (nums[i]+nums[j]+x -target < 0) {
                    if (abs(nums[i]+nums[j]+x -target) < res) {
                        res = abs(nums[i]+nums[j]+x -target);
                        res2 = nums[i]+nums[j]+x;
                    }
                    i++;
                }
            }
        }


        return  res;
    }
};



int main() {
    Solution* sol = new Solution();
    vector<int> x = {0,0,0,0};
    sol->threeSum(x);
}

