bool comp(vector<int> &a,vector<int> &b) {
	return a[1]<b[1];
}
class Solution {
public:
	int eraseOverlapIntervals(vector<vector<int>>& intervals) {
		int ans=-1;      
		sort(intervals.begin(),intervals.end(),comp);
		int prev= intervals[0][1];
		for(vector<int> i: intervals) {
			if(prev>i[0]) {
				ans++;                
			}else prev=i[1];
		}
		return ans;
	}
};