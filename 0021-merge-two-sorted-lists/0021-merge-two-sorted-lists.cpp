/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* dumHead = new ListNode(-1);
    ListNode* dum = dumHead;
    void fxn(ListNode* temp1, ListNode* temp2) {

        if (temp1 == NULL || temp2 == NULL) {
            // do something
            if(temp1 == NULL){
                dum->next = temp2;
            }
            else{
                dum->next = temp1;
            }
            return;
        }

        if (temp1->val <= temp2->val) {
            dum->next = temp1;
            dum = dum->next;
            fxn(temp1->next , temp2);

        }else{
            dum->next = temp2;
            dum = dum->next;
            fxn(temp1  , temp2->next);
        }
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        fxn(list1, list2);

        ListNode* head = dumHead->next;
        return head;
    }
};