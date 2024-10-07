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
    //bruteforce approach
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL) return 0;
        int diameter = 0;
        findMax(root, diameter);
        return diameter;
    }

private:
    int getHeight(TreeNode* node){
        if(node == NULL) return 0;
        int lh = getHeight(node->left);
        int rh = getHeight(node->right);
        return 1 + max(lh , rh);
    }

    void findMax(TreeNode* node,int &maxi){
        if(node == NULL) return ;
        int leftHeight = getHeight(node->left);
        int rightHeight = getHeight(node->right);
        maxi = max(leftHeight+rightHeight, maxi);
        findMax(node->left,maxi);
        findMax(node->right,maxi);
    }
   
};