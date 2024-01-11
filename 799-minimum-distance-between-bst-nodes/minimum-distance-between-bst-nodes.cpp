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
    vector<int> inorderNodes;
    void inorderTraversal(TreeNode* root) {
        if (root) {
            inorderTraversal(root -> left);
            inorderNodes.push_back(root -> val);
            inorderTraversal(root -> right);
        }
    }
    
    int minDiffInBST(TreeNode* root) {
        inorderTraversal(root);
        int ans = INT_MAX;
        for(int i = 1; i < inorderNodes.size(); i++) {
            ans = min(ans, inorderNodes[i] - inorderNodes[i - 1]);
        }    
        return ans;
    }
};