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
        if(head == NULL) return NULL;
        // inserting node in between
        Node* temp = head;
        while(temp!=NULL){
            Node* copyNode = new Node(temp->val);
            copyNode->next = temp->next;
            temp->next = copyNode;
            temp = temp->next->next;
        }

        //connecting the random pointers
        temp = head;
        while(temp!=NULL){
            if(temp->random != NULL) { 
                temp->next->random = temp->random->next;
            }
            temp = temp->next->next;
        }

        // making sure next pointer is connected
        temp = head;
        Node* dummyNode = new Node(-1);
        Node* copyHead = dummyNode;
        while(temp!=NULL){
            copyHead->next = temp->next;
            temp->next = temp->next->next; //connecting orignal next pointer
            temp = temp->next;
            copyHead = copyHead->next;
        }
        return dummyNode->next;
    }

};