struct Node {
    int val;
    Node* next = nullptr;
};

class MyHashSet {
private:
    Node* head;

public:
    MyHashSet() {
        head = new Node();
    }
    void add(int key) {
        Node* curr = head;
        while (curr->next) {
            if (curr->next->val == key)
                return;
            curr = curr->next;
        }
        Node* add_val = new Node();
        add_val->val = key;
        curr->next = add_val;
    }
    void remove(int key) {
        Node* curr = head;
        while (curr->next) {
            if (curr->next->val == key) {
                Node* temp = curr->next;
                curr->next = curr->next->next;
                delete temp;
                return;
            }
            curr = curr->next;
        }
    }
    bool contains(int key) {
        Node* curr = head;
        while (curr->next) {
            if (curr->next->val == key)
                return true;
            curr = curr->next;
        }
        return false;
    }
};