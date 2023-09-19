#include <stack>
class MyQueue {
public:
    stack<int> st1;
    stack<int> st2;
    MyQueue() {
        
    }
    
    void push(int x) {
        while(!st1.empty()) {
            int num = st1.top();
            st1.pop();
            st2.push(num);
        }
        st2.push(x);
        while(!st2.empty()) {
            int num = st2.top();
            st2.pop();
            st1.push(num);
        }
    }
    
    int pop() {
        int num = st1.top();
        st1.pop();
        return num;
    }
    
    int peek() {
        return st1.top();
    }
    
    bool empty() {
        return st1.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */