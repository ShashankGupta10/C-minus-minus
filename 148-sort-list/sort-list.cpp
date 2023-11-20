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
    ListNode* sortList(ListNode* head) {
        if (!head || !head->next) return head;
        ListNode *curr = new ListNode();
        curr = head;
        vector<int> v;
        while (curr) {
            v.emplace_back(curr->val);
            curr = curr -> next;
        }
        sort(v.begin(), v.end());
        curr = head;
        for (int i=0;i<v.size();i++) {
            curr -> val = v[i];
            curr = curr -> next;
        }
        return head;
    }
};