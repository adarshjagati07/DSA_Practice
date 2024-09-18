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
    ListNode* reverseList(ListNode* head) {
        ListNode* temp = head;
        ListNode* dummyNode = new ListNode(-1);
        ListNode* current = dummyNode;
        stack<int> stk;

        if(head == NULL) return NULL;

        while(temp != NULL){
            stk.push(temp->val);
            temp = temp->next;
        }
        
        while(!stk.empty()){
            ListNode* newNode = new ListNode(stk.top());
            stk.pop();
            current->next = newNode;
            current = newNode;
        }
        return dummyNode->next;
    }
};