class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max_val = INT_MIN;
        int altitude = 0;
        for (int i = 0; i < gain.size(); i++) {
            altitude += gain[i];
            max_val = max(max_val, altitude);
        }
        return max_val>0?max_val:0;
    }
};
