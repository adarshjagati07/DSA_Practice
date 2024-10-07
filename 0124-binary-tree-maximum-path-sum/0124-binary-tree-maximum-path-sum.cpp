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
    int maxPathSum(TreeNode* root) {
        if(root == NULL) return 0;
        int maximumPathSum = INT_MIN;
        maxPathBelow(root, maximumPathSum);
        return maximumPathSum;
    }
private:
    int maxPathBelow(TreeNode* node, int &maxi){
        if(node == NULL) return 0;
        
        int leftSum = max(0, maxPathBelow(node->left, maxi));
        int rightSum = max(0, maxPathBelow(node->right, maxi));

        maxi = max(maxi, leftSum+ rightSum+ node->val);
        return node->val + max(leftSum, rightSum);
    }
};