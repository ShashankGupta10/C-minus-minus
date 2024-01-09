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
    void get_elements(vector<int> &ans, TreeNode* root){
        if(root == NULL) return;
        ans.push_back(root->val);
        if(root->left) get_elements(ans, root->left);
        if(root->right) get_elements(ans, root->right);
        return;
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> ans;
        get_elements(ans, root1);
        get_elements(ans, root2);
        sort(ans.begin(), ans.end());
        return ans;
    }
};