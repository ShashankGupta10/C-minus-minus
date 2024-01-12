class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head -> next == nullptr) return nullptr;
        ListNode*slow = new ListNode{ -1, head };
        ListNode*fast = head;
        while(fast && fast -> next){
            fast = fast -> next -> next;
            slow = slow -> next;
        }
        slow -> next = slow -> next -> next;
        return head;        
    }
};