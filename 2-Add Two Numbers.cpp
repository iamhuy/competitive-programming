#include<bits/stdc++.h>

using namespace std;



struct ListNode {
   int val;
   ListNode *next;
   ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
    public:
        ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
            int remain = 0;
            ListNode* sum = NULL;
            ListNode* tail = NULL;
            ListNode* p1 = l1;
            ListNode* p2 = l2;


            while (p1 != NULL && p2 != NULL) {
                ListNode* p = new ListNode((p1->val + p2->val + remain)%10);
                remain = (p1->val + p2->val + remain)/10;
                if (sum == NULL) {
                    sum = p;
                    tail = p;
                } else {
                    tail->next = p;
                    tail = p;
                }
                p1 = p1->next;
                p2 = p2->next;
            }

            while (p1 != NULL) {
                ListNode* p = new ListNode((p1->val + remain) % 10)
                remain = (p1->val + remain)/10;
                tail->next = p;
                tail = p;
                p1 = p1->next;
            }

            while (p2 != NULL) {
                ListNode* p = new ListNode((p2->val + remain) % 10)
                remain = (p2->val + remain)/10;
                tail->next = p;
                tail = p;
                p2 = p2->next;
            }

            if (remain == 1) {
                ListNode* p = new ListNode(1);
                tail->next = p;
                tail = p;
            }

            return sum;
        }
};


int main() {
    Solution* sol = new Solution();
}

