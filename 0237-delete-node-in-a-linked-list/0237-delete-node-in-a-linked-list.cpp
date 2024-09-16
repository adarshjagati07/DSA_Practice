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
    void deleteNode(ListNode* node) {
        if (node == NULL || node->next == NULL) {
            return;
        }
        // Copy the value of the next node to the current node.
        node->val = node->next->val;
        
        // Save the next node to delete it.
        ListNode* temp = node->next;
        
        // Update the current node's next pointer to skip the next node.
        node->next = node->next->next;
        
        // Delete the next node.
        delete temp;
    }
};