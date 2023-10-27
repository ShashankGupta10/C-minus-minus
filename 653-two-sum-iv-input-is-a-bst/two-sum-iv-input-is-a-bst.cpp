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
    bool findTarget(TreeNode* root, int k) {
        vector<int> vec;
        inorder(root, vec);
        int i  = 0, j = vec.size()-1;
        while(i<j){
            if(vec[i] + vec[j] == k) return true;
            (vec[i] + vec[j]) < k ? i++ : j--;
        }
        return false;
    }
private:
    void inorder(TreeNode* root, vector<int>& vec){
        if(root == nullptr) return;
        inorder(root->left, vec);
        vec.push_back(root->val);
        inorder(root->right, vec);
    }
};