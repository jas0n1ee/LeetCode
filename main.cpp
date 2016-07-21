#include<iostream>
#include<vector>
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
    ListNode* reverseList(ListNode* head) {
        ListNode* p = head;
        while(!p){
            list.push_back(p->val);
            p = p->next;
        }
        p = head;
        int i = 1,l = list.size();
        while(!p){
            p->val = list[l - i];
            i ++;
            p = p->next;
        }
        return head;
    }
    vector<int> list;
};
int main() {
    return 0;
}
