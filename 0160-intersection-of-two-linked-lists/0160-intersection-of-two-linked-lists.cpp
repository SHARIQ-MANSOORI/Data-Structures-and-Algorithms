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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        set<ListNode*> s;
        ListNode* temp = headA;

        while(temp != NULL){
            s.insert(temp);
            temp = temp->next;
        }

        temp = headB;

        while(temp != NULL){
            if(*s.find(temp) == temp){
                return temp;
            }

            temp = temp->next;
        }

        return NULL;
        
    }
};