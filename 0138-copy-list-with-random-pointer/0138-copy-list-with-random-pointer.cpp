/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (head == NULL) {
            return head;
        }

        unordered_map<Node*, Node*> mp;
        Node* oldTemp = head;
        Node* newHead = NULL;
        Node* newTemp = NULL;
        bool ishead = true;

        while (oldTemp != NULL) {
            Node* newNode = new Node(oldTemp->val);
            if (ishead) {
                newHead = newNode;
                newTemp = newNode;
                ishead = false;
            } else {
                newTemp->next = newNode;
                newTemp = newNode;
            }

            mp[oldTemp] = newTemp;

            oldTemp = oldTemp->next;
        }

        newTemp->next = NULL;

        oldTemp = head;
        newTemp = newHead;


        while(oldTemp != NULL){
            newTemp->random = mp[oldTemp->random];
            newTemp = newTemp->next;
            oldTemp = oldTemp->next;
        }
    

        return newHead;
    }
};