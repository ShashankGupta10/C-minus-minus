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
    // void preorder(TreeNode *root, string ans) {
    //     if (!root) return;
    //     ans+=to_string(root->val);
    //     preorder(root->left, ans);
    //     preorder(root->right, ans);
    // }
    string tree2str(TreeNode* root) {
        if (!root) return "";
        string result = to_string(root->val);
        if (root->left || root->right) result += "(" + tree2str(root->left) + ")";
        if (root->right) result += "(" + tree2str(root->right) + ")";
        return result;
    }
};