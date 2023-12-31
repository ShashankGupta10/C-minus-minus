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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode *curr = head;
        while (curr && curr -> next) {
            int num1 = curr -> val;
            int num2 = curr -> next -> val;
            int gcd_nums = __gcd(num1, num2);

            ListNode *new_node = new ListNode(gcd_nums);
            new_node -> next = curr -> next;
            curr -> next = new_node;
            curr = curr -> next -> next;
        }
        return head;
    }
};
