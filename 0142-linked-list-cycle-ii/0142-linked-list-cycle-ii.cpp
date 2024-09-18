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
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        int flag = 0;
        // Intially detecting the loop
        while(fast!=NULL && fast->next!=NULL){
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow){
                flag = 1;
                break;
            }
        }
        // if no loop detected
        if(flag == 0) return NULL;

        //finding the starting node of loop
        slow = head;
        while(slow!=fast){
            slow = slow->next;
            fast = fast->next;
        }
        return fast;
    }
};