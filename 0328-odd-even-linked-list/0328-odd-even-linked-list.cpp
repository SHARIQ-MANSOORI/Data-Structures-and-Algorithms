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
    ListNode* oddEvenList(ListNode* head) {

        if (head == NULL || head->next == NULL || head->next->next == NULL)
            return head;

        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* temp = head->next->next;
        ListNode* evenHead = even;

        int count = 1;

        while (temp != NULL) {
            if (count % 2 != 0) {
                // odd
                odd->next = temp;
                odd = temp;
            } else {
                // even
                even->next = temp;
                even = temp;
            }

            temp = temp->next;
            count++;
        }

        odd->next = evenHead;
        even->next = NULL;

        return head;
    }
};