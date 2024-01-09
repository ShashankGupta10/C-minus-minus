class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count = 0;
        bool val = false;
        for (int i=0;i<arr1.size(); i++) {
            for (int j=0;j<arr2.size(); j++) if (abs(arr1[i] - arr2[j]) <= d) val = true;
            if (!val) count++;
            else val = false;
        }
        return count;
    }
};