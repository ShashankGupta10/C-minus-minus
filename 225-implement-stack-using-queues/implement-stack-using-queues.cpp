class MyStack {
public:
    queue<int> q1;
    queue<int> q2;
    MyStack() {
        ;    
    }
    
    void push(int x) {
        while (!q1.empty()) {
            int ele = q1.front();
            q2.push(ele);
            q1.pop();
        }
        q1.push(x);
        while(!q2.empty()) {
            int ele = q2.front();
            q1.push(ele);
            q2.pop();
        }
    }
    
    int pop() {
        int ele = q1.front();
        q1.pop();
        return ele;
    }
    
    int top() {
        return q1.front();     
    }
    
    bool empty() {
        return q1.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */