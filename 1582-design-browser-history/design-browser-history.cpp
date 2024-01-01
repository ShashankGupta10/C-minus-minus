struct Node {
    string val;
    Node* prev=NULL;
    Node* next=NULL;
};
class BrowserHistory {
public:
    Node *curr = nullptr;
    BrowserHistory(string homepage) {
        curr = new Node();
        curr -> val = homepage;
    }
    
    void visit(string url) {    
        Node *visited = new Node();
        visited -> val = url;
        curr -> next = visited;
        visited -> prev = curr;
        curr = visited;
    }
    
    string back(int steps) {
        while (curr && curr -> prev && steps > 0) {
            curr = curr -> prev;
            steps--;
        }
        return curr -> val;
    }
    
    string forward(int steps) {
        while(curr->next&& steps>0) {
            curr=curr->next;
            steps--;
        } 
       return curr->val;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */