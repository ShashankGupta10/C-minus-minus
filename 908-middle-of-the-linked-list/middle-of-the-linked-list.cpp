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
    ListNode* middleNode(ListNode* head) {
        int count = 0;
        ListNode *curr = head;
        while (curr) {
            curr = curr->next;
            count++;
        }
        int midNode = ceil(count/2);
        ListNode *current = head;
        while (midNode!=0 && current) {
            current = current->next;
            midNode--;
        } 
        return current;
    }
};