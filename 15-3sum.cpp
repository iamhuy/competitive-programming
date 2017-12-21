#include<bits/stdc++.h>

using namespace std;



class Solution {
public:
    vector<vector<int> > threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int> > res;
        int n = nums.size();

        for (int k=0;k<n-2;k++) {
            if (k > 0 && nums[k]==nums[k-1]) continue;
            int x = nums[k];
            int i = k+1;
            int j = n-1;
            while (i<j) {
                if (nums[i]+nums[j]+x==0) {
//                    cout << k << ' ' << i << ' ' << j << endl;
                    vector<int> candidate= {x,nums[i], nums[j]};
                    res.push_back(candidate);
                    while (i < j && nums[i] == nums[i+1]) i++;
                    while (i < j && nums[j] == nums[j-1]) j--;
                    i++;j--;
//                    cout << i <<' ' <<  j << endl;
                }
                else if (nums[i]+nums[j]+x > 0) j--;
                else if (nums[i]+nums[j]+x < 0) i++;
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

