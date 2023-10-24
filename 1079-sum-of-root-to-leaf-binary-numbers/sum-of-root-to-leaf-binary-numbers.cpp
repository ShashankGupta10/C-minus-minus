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
    void func(TreeNode* root, string curr, vector<int>& ans) {
        if (!root) return;
        curr += to_string(root->val);
        if (!root->left && !root->right) {
            ans.push_back(stoi(curr, 0, 2));
            return;
        }
        func(root->left, curr, ans);
        func(root->right, curr, ans);
    }

    int sumRootToLeaf(TreeNode* root) {
        vector<int> ans;
        func(root, "", ans);
        int res = 0;
        for (int num : ans) res += num;
        return res;
    }
};
