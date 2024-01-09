class Solution {
    TreeNode* solve(vector<int> &preorder, int maxi, int &i) {
        if(i >= preorder.size()) return NULL;
        if(preorder[i] > maxi) return NULL;
        TreeNode* root = new TreeNode(preorder[i++]);
        root -> left = solve(preorder, root->val, i);
        root -> right = solve(preorder, maxi, i);
        return root;
    }
    public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i = 0;
        return solve(preorder, INT_MAX, i);
    }
};