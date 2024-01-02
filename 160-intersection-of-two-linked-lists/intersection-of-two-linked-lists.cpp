/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode*,int> mp;
        for (auto p = headA ; p!=NULL ; p = p->next) mp[p]=p->val;
        for (auto p = headB ; p!=NULL ; p = p->next) if (mp.find(p)!=mp.end()) return p;
        return NULL;
    }
};;