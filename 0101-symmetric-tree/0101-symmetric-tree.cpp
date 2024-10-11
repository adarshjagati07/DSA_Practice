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
    bool isSymmetric(TreeNode* root) {
        if(root == NULL) return true;

        TreeNode* leftTree = root->left;
        TreeNode* rightTree = root->right;
        return ifSymmetric(leftTree, rightTree);
    }
private:
    bool ifSymmetric(TreeNode* leftNode, TreeNode* rightNode){
        if(leftNode == NULL && rightNode == NULL) return true;
        if(leftNode == NULL || rightNode == NULL) return false;

        return (leftNode->val == rightNode->val) && ifSymmetric(leftNode->left,rightNode->right) && ifSymmetric(leftNode->right, rightNode->left);
       
    }
};