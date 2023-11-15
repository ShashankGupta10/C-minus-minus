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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = 0;
        ListNode *temp = head;
        while (temp) {
            temp = temp->next;
            len++;
        }

        int reach = len - n - 1;
        ListNode *res = head;
        if (reach < 0) {
            head = head->next;
            delete res;
            return head;
        }
        while (reach > 0) {
            res = res->next;
            reach--;
        }
        if (res->next) {
            ListNode *toRemove = res->next;
            res->next = res->next->next;
            delete toRemove;
        }
        return head;
    }
};
