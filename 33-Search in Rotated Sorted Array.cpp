#include<bits/stdc++.h>

using namespace std;


class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();

        if (n==0) return -1;
//        if (n==1) return (nums[0]==target?0:-1);

        int first = 0;
        int last = n-1;
        int pivot = 0;

        while (first<=last) {
            int mid = (first+last)/2;
            if (nums[mid] <= nums[n-1]) {
                last = mid-1;
                pivot = mid;
            } else first = mid + 1;
        }

//        cout << pivot;

        if (target <= nums[n-1]) {
            first = pivot;
            last = n-1;
        } else {
            last = pivot-1;
            first = 0;
        }

        while (first<=last) {
            int mid = (first+last)/2;
            if (nums[mid] == target) return mid;
            if (nums[mid] < target) first = mid+1; else last = mid-1;
        }

        return -1;
    }
};


int main() {
    Solution* sol = new Solution();
    vector<int> x = {3,1};
    cout << sol->search(x,1);

}
