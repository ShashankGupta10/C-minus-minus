class Solution {
    void dfs(TreeNode* root, vector<int> &ans, int k){
        if(!root || ans.size() > k) return;
        dfs(root -> left, ans, k);
        if(ans.size() < k) ans.push_back(root -> val);
        dfs(root -> right, ans, k);
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        vector<int> ans;
        dfs(root, ans, k);
        return ans.back();
    }
};