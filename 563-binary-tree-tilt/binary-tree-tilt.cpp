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
    int findTilt(TreeNode* root) {
        int totalTilt = 0;
        calculateTilt(root, totalTilt);
        return totalTilt;
    }

    int calculateTilt(TreeNode* node, int& totalTilt) {
        if (!node) return 0;
        int leftSum = calculateTilt(node->left, totalTilt);
        int rightSum = calculateTilt(node->right, totalTilt);

        int nodeTilt = abs(leftSum - rightSum);
        totalTilt += nodeTilt;
        return leftSum + rightSum + node->val;
    }
};
