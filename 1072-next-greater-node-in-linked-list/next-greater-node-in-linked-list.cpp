/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> ans;
        ListNode* curr = new ListNode();
        ListNode *trav = new ListNode();
        curr = head;
        trav = head;
        while (curr->next) {
            if (trav) {
                if (curr->val < trav->val ) {
                ans.push_back(trav->val);
                curr = curr->next;
                trav = curr->next;
                }
                else trav = trav->next;
            }
            else {
                ans.push_back(0);
                curr = curr->next;
                trav = curr->next;
            }
        } 
        ans.push_back(0);
        return ans;
    }
};