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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        ListNode* temp1 = list1;
        ListNode* temp2 = list2;

        ListNode* dumHead = new ListNode(-1);
        ListNode* dum = dumHead;


        while(temp1 != NULL && temp2 != NULL){
            if(temp1->val <= temp2->val){
                dum->next = temp1;
                dum = dum->next; // 
                temp1 = temp1->next;
               
            }
            else{
                dum->next = temp2;
                dum = dum->next; // 
                temp2 = temp2->next;
            }
        }
        

        while(temp1 != NULL){
            dum->next = temp1;
            dum = dum->next;
            temp1 = temp1->next;
        }

        while(temp2 != NULL){
            dum->next = temp2;
            dum = dum->next;
            temp2 = temp2->next;
        }

        ListNode* head = dumHead->next;
        return head;
    }
};