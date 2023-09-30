class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        for (int i=0;i<intervals.size()-1;i++) {
            if (intervals[i][1] >= intervals[i+1][0]) {
                if (intervals[i+1][1]>intervals[i][1]) intervals[i][1] = intervals[i+1][1];
                intervals.erase(intervals.begin()+i+1);
                i--;
            }
        }
        return intervals;
    }
};