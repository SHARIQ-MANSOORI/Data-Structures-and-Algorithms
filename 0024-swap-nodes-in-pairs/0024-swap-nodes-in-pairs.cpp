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
    ListNode* swapPairs(ListNode* head) {

        if (head == NULL || head->next == NULL)
            return head;

        ListNode* first = head;
        ListNode* second = head->next;
        ListNode* prev = NULL;

        while (first != NULL && second != NULL) {

            ListNode* Next = second->next;

            second->next = first;
            first->next = Next;

            if (prev) {
                prev->next = second;
            } else {
                head = second;
            }

            prev = first;
            first = Next;
            if (Next) {
                second = Next->next;
            } else {
                second = NULL;
            }
        }

        return head;
    }
};