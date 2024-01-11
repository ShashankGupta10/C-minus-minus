class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> v;
        while (head) {
            v.emplace_back(head -> val);
            head = head -> next;
        } 
        for (int a = 0, b = v.size() - 1; a < b; a++, b--) {
            if (v[a] != v[b]) return false;
        }
        return true;
    }
};