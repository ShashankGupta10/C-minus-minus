class MinStack {
private:
    int min_ele = INT_MAX;
    stack<int> st;
public:
    MinStack() {}
    void push(int val) {
        if (val <= min_ele) {
            st.push(min_ele);
            min_ele = val;
        }
        st.push(val);
    }
    void pop() {
        if (st.top() == min_ele) {
            st.pop();
            min_ele = st.top();
            st.pop();
        } else {
            st.pop();
        }
    }
    int top() {
        return st.top();
    }
    int getMin() {
        return min_ele;
    }
};
