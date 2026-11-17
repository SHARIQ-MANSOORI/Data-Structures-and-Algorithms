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
    ListNode* partition(ListNode* head, int x) {

        if(head == NULL || head->next == NULL) return head;

        ListNode* temp = head;
        ListNode* dum1 = new ListNode(-1);
        ListNode* dum2 = new ListNode(-1);

        ListNode* dumA = dum1;
        ListNode* dumB = dum2;


        while(temp != NULL){

            if(temp->val < x){
                dumA->next = temp;
                dumA = dumA->next;
            }else{
                dumB->next = temp;
                dumB = dumB->next;
            }

            temp = temp->next;
        }

        dumA->next = dum2->next;
        dumB->next = NULL;
        ListNode* newHead = dum1->next;
        return newHead;
        
    }
};