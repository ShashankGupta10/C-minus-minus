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
    int max_sum = INT_MIN, level = 0;
    int maxLevelSum(TreeNode* root) {
        int max_level = 0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()) {
            int level_size = q.size();
            int curr_sum = 0;
            for (int i = 0; i < level_size; i++) {
                curr_sum += q.front() -> val;
                if (q.front() -> left) q.push(q.front() -> left);
                if (q.front() -> right) q.push(q.front() -> right);
                q.pop();
            }
            level++;
            if (curr_sum > max_sum) {
                max_sum = curr_sum;
                max_level = level;
                curr_sum = 0;
            }
        }
        return max_level;
    }
};