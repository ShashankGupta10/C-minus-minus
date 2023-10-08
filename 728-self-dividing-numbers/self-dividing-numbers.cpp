class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for (int i=left;i<=right;i++) {
            string curr = to_string(i);
            bool flag = false;
            for (int j=0;j<curr.size();j++) {
                int num = curr[j]-'0';
                if (num==0 || i%num!=0) {
                    flag = true;
                } 
            }
            if (!flag) ans.emplace_back(i);
        }
        return ans;
    }
};