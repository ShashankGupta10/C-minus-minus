#include <queue>

class MyStack {
public:
    // Two queues to implement the stack
    queue<int> q1;
    queue<int> q2;
    
    MyStack() {

    }
    
    void push(int x) {
        q1.push(x);
        
        // Move elements from q2 to q1
        while (!q2.empty()) {
            q1.push(q2.front());
            q2.pop();
        }
        
        // Swap q1 and q2 (q2 is now empty)
        swap(q1, q2);
    }
    
    int pop() {
        int num = top();
        q2.pop();
        return num;
    }
    
    int top() {
        return q2.front();
    }
    
    bool empty() {
       return q2.empty();
    }
};
