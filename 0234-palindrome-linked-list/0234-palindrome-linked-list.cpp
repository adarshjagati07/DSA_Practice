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
    bool isPalindrome(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return true;  // A single node or empty list is always a palindrome
        }

        // Step 1: Push all values onto the stack
        stack<int> stk;
        ListNode* temp = head;
        while (temp != NULL) {
            stk.push(temp->val);
            temp = temp->next;
        }

        // Step 2: Compare stack values with list values
        temp = head;
        while (temp != NULL) {
            if (temp->val != stk.top()) {
                return false;  // Mismatch found, it's not a palindrome
            }
            stk.pop();  // Pop the top value
            temp = temp->next;  // Move to the next node
        }

        return true;  // All values matched, it's a palindrome
    }
};