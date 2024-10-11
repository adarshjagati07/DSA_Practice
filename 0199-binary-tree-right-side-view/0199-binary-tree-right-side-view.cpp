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
    vector<int> ans;
    vector<int> rightSideView(TreeNode* root) {
        if(root == NULL) return ans;
        reversePreorder(root, 0);
        return ans;
    }
private:
    void reversePreorder(TreeNode* node, int level){
        if(node == NULL) return;

        if(level == ans.size()) ans.push_back(node->val);

        reversePreorder(node->right, level+1);
        reversePreorder(node->left, level+1);
    }
};