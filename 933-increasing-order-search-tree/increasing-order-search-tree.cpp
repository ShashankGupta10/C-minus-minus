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
    TreeNode* increasingBST(TreeNode* root) {
        vector<int> ans;
        inOrderTraversal(root, ans);
        TreeNode *newRoot = new TreeNode(ans[0]);
        TreeNode *current = newRoot;
        
        for (int i = 1; i < ans.size(); i++) {
            current->right = new TreeNode(ans[i]);
            current = current->right;
        }
        return newRoot;
    }
    
    void inOrderTraversal(TreeNode* root, vector<int>& ans) {
        if (root) {
            inOrderTraversal(root->left, ans);
            ans.push_back(root->val);
            inOrderTraversal(root->right, ans);
        }
    }
};
