class Solution {
    void dfs(TreeNode* root, vector<int> &ans, int k){
        if(!root) return;
        dfs(root -> left, ans, k);
        ans.push_back(root -> val);
        dfs(root -> right, ans, k);
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        vector<int> ans;
        dfs(root, ans, k);
        return ans[k - 1];
    }
};