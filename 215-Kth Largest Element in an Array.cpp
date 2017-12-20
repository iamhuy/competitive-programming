#include<bits/stdc++.h>

using namespace std;


class comp {
    public:
     bool operator() (const int& lhs, const int&rhs) const {
         return (lhs > rhs);
     }
};


class Solution {
    public:
        int findKthLargest(vector<int>& nums, int k) {
            priority_queue<int, vector<int>, comp> q;
            for (auto x:nums) {
                if (q.size() < k) q.push(x);
                else {
                    int top = q.top();
                    if (x>top) {
                        q.pop();
                        q.push(x);
                    }
                }
            }
            return q.top();
        }
};


int main() {
    Solution* sol = new Solution();
    vector<int> x = {-2,6,1,2,6,11};
    cout << sol->findKthLargest(x, 2);

}
