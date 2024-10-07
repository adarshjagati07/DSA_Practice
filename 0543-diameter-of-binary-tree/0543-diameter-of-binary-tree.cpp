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
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL) return 0;
        int diameter = 0;
        int height = findMax(root, diameter);
        return diameter;
    }
private:
    int findMax(TreeNode* node, int &maxi){
        if(node == NULL) return 0;

        int lh = findMax(node->left, maxi);
        int rh = findMax(node->right, maxi);

        maxi = max(lh+rh, maxi);
        return 1 + max(rh, lh);
    }
};