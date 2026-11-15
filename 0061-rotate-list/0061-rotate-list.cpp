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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL || head->next == NULL)
            return head;
       

        int n = 0;
        ListNode* temp = head;
        ListNode* tail = head;

        while (temp != NULL) {
            if (tail->next != NULL) {
                tail = tail->next;
            }
            n++;
            temp = temp->next;
        }

        k = k % n; // k comes under the size;
         if (k == 0)
            return head;

        temp = head;

        int times = n - k;
        int i = 1;

        while (i < times) { // place the temp at rotating node

            i++;
            temp = temp->next;
        }

        ListNode* newHead = temp->next;

        tail->next = head;
        temp->next = NULL;

        return newHead;
    }
};