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
    ListNode* findMid(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head->next; // main point , this will return pre mid 

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }
    ListNode* mergeAndSortTwoList(ListNode* temp1, ListNode* temp2) {
        ListNode* dumHead = new ListNode(-1);
        ListNode* dum = dumHead;

        while (temp1 != NULL && temp2 != NULL) {
            if (temp1->val <= temp2->val) {
                dum->next = temp1;
                dum = dum->next;
                temp1 = temp1->next;
            } else {
                dum->next = temp2;
                dum = dum->next;
                temp2 = temp2->next;
            }
        }

        if (temp1 == NULL) {
            dum->next = temp2;

        } else {
            dum->next = temp1;
        }

        return dumHead->next;
    }
    ListNode* mergeSort(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return head;

        ListNode* midNode = findMid(head); //find mid
        ListNode* leftNode = head; // find the start
        ListNode* rightNode = midNode->next; // find the end
        midNode->next = NULL; // break connection

        leftNode = mergeSort(leftNode);
        rightNode = mergeSort(rightNode);

        return  mergeAndSortTwoList(leftNode, rightNode);
    }

    ListNode* sortList(ListNode* head) {
         return mergeSort(head);
         
   }
};