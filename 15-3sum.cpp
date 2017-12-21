#include<bits/stdc++.h>

using namespace std;



class Solution {
public:
    vector<vector<int> > threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<vector<int> > s;
        int n = nums.size();

        for (int k=0;k<n-2;k++) {
            int x = nums[k];
            int i = k+1;
            int j = n-1;
            while (i<j) {
                if (nums[i]+nums[j]+x==0) {
                    vector<int> candidate= {x,nums[i], nums[j]};
                    if (s.find(candidate) == s.end()) s.insert(candidate);
                    i++;
                }
                else if (nums[i]+nums[j]+x > 0) j--;
                else if (nums[i]+nums[j]+x < 0) i++;
            }
        }

        vector<vector<int> > res(s.begin(), s.end());
        return  res;
    }
};


int main() {
    Solution* sol = new Solution();
}

