/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {

        ListNode* Next = node->next; // create a next node

        node->val = Next->val; // copy the value of next node into gievn node

        node->next = Next->next; // detach the next 
        
    }
};