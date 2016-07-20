#include<iostream>
using namespace std;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* NL1 = l1;
        ListNode* NL2 = l2;
        ListNode* result = new ListNode(((NL1)?NL1->val:0) + ((NL2)?NL2->val:0));
        if(result->val > 9) {
            result->val %= 10;
            result->next = new ListNode(1);
        }
        ListNode* result_e = result;
        NL1 = (NL1)?NL1->next:NULL;
        NL2 = (NL2)?NL2->next:NULL;
        while(NL1 || NL2) {
            if (result_e->next) {
                delete result_e->next;
                result_e->next = new ListNode(((NL1)?NL1->val:0) + ((NL2)?NL2->val:0) + 1);
            }
            else
                result_e->next = new ListNode(((NL1)?NL1->val:0) + ((NL2)?NL2->val:0));
            if(result_e->next->val > 9) {
                result_e->next->val %= 10;
                result_e->next->next = new ListNode(1);
            }
            result_e = result_e->next;
            NL1 = (NL1)?NL1->next:NULL;
            NL2 = (NL2)?NL2->next:NULL;
        }
        return result;
    }
};
int main() {
    return 0;
}
