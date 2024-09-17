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
        if (head == NULL || head->next == NULL) {
            return head;  // No need to rearrange if there are 0 or 1 nodes.
        }

        ListNode* odd = head;  // Start from the first node (odd)
        ListNode* even = head->next;  // Start from the second node (even)
        ListNode* evenHead = even;  // Save the head of the even list for later

        while (even != NULL && even->next != NULL) {
            odd->next = even->next;  // Connect odd nodes
            odd = odd->next;  // Move to the next odd node
            even->next = odd->next;  // Connect even nodes
            even = even->next;  // Move to the next even node
        }

        odd->next = evenHead;  // Append the even list to the end of the odd list
        return head;  // Return the reordered list
    }
};