class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int>mp;
        for(int i = 0; i < s.size(); i++) mp[s[i]] = i;
        vector<int> res;
        int prev = -1;
        int idx = 0;
        for(int i = 0; i < s.size(); i++){
            idx = max(idx, mp[s[i]]);
            if(idx == i){
                res.push_back(idx - prev);
                prev = idx;
            }
        }
        return res;
    }
};