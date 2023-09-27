class Solution {
public:
    int candy(vector<int>& ratings) {
        int candies = 1;
        int len = ratings.size();
        vector<int> v(ratings.size(), 1);
        for (int i = 1; i < len; i++) {
		    if(ratings[i]>ratings[i-1]) v[i]=v[i-1]+1;
	    }
        for (int i= len-1; i>0 ; i--) {
            if(ratings[i-1]>ratings[i]) v[i-1]=max(v[i]+1,v[i-1]);
        }
        int result=0;
        for (int i = 0; i < len; i++) {
            result+=v[i];
        }
        return result;
    }
};