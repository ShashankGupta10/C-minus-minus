class CustomStack {
public:
    stack<int> st;
    int maxSize;

    CustomStack(int maxSize) {
        this -> maxSize = maxSize;
    }

    void push(int x) {
        if (st.size() < maxSize) st.push(x);
    }

    int pop() {
        if (!st.empty()) {
            int ele = st.top();
            st.pop();
            return ele;
        } else {
            return -1;
        }
    }

    void increment(int k, int val) {
        stack<int> helper;
        while (!st.empty()) {
            helper.push(st.top());
            st.pop();
        }
        while (!helper.empty() && k > 0) {
            st.push(helper.top() + val);
            helper.pop();
            k--;
        }
        while (!helper.empty()) {
            st.push(helper.top());
            helper.pop();
        }
    }
};

