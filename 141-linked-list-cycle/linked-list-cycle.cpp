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
    bool hasCycle(ListNode *head) {
        if (head == NULL) {
            return false;
        }
        ListNode *curr = head;
        ListNode *skipTwo = head;
        while (skipTwo && skipTwo->next) {
            curr = curr->next;
            skipTwo = skipTwo->next->next;
            if (skipTwo==curr) {
                return true;
            }
            
        }
        return false;
    }
};