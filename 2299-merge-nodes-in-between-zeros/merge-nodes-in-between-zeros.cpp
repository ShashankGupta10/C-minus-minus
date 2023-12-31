/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 **/

class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode *curr = head;
        ListNode *add_operation = head;

        int sum = 0;
        while (curr && curr->next) {
            if (curr->next->val != 0) {
                sum += curr->next->val;
                curr = curr->next;
            } else {
                add_operation->next->val = sum;
                add_operation = add_operation->next;
                sum = 0;
                curr = curr->next;
            }
        }
        add_operation -> next = nullptr;
        return head->next;
    }
};