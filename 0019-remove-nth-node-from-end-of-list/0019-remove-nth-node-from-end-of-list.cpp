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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast = head;
        ListNode* slow = head;
        if(head == NULL) return NULL;
        int i = 1;
        while(i <= n){
            fast = fast->next;
            i++;
        }
        while(fast!=NULL && fast->next!= NULL){
            fast = fast->next;
            slow = slow->next;
        }
        ListNode* tobeDeleted = head;
        if(fast == NULL){
            head = head->next;
            delete tobeDeleted;
            return head;
        }
        tobeDeleted = slow->next;
        slow->next = slow->next->next;
        delete tobeDeleted;
        return head;
    }
};