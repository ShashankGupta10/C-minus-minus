class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> v;
        stack<int> st;
        int num = 1;
        for (int i=0;i<target.size();i++) {
            st.push(num);
            v.push_back("Push");
            while (true) {
                if (st.top()==target[i]) {
                    num++;
                    break;
                } else {
                    st.pop();
                    v.push_back("Pop");
                    num++;
                    st.push(num);
                    v.push_back("Push");
                }
            }
        }
        return v;
    }
};