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

    ListNode* reverse(ListNode* head){
        ListNode*p = NULL, *q = NULL, *r = head;

        while(r!= NULL){
            p = q;
            q = r;
            r = r->next;
            q->next = p;
        }
        head = q;
        return head;
    }

    int pairSum(ListNode* head) {
        if(head == NULL) return NULL;
        if(head -> next -> next == NULL){
            int sum = head -> val + head -> next -> val;
            return sum;
        }

        ListNode *temp = head ,*s = head , *f = head -> next;
        while (f != NULL){
            f = f -> next;
            if (f != NULL){
                f = f -> next;
                s = s -> next;
            }
        }

        ListNode* second = reverse(s -> next);
        s -> next = second;
        ListNode* first = head;
        int ans = INT_MIN;
        while(second != NULL) {
            int data = first -> val + second->val;
            ans = max(ans,data);
            first = first->next;
            second = second->next;
        }
        return ans;
    }
};