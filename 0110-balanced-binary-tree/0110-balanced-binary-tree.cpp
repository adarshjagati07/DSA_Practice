/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if(root == NULL) return true;
        
        int ans = checkHeight(root);
        if(ans == -1) return false;
        return true;
    }

private:
    int checkHeight(TreeNode* node){
        if(node == NULL) return 0;

        int lh = checkHeight(node->left);
        int rh = checkHeight(node->right);

        if(lh == -1 || rh == -1) return -1; // our overflow condition
        if(abs(lh-rh) > 1) return -1; // to check height at every level

        return 1 + max(lh, rh);
    }
};