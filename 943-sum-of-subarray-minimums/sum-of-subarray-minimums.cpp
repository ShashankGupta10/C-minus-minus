class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int M=1e9+7;
        long long int ans=0;
        for(int i=0;i<arr.size();i++){
            int right=0,left=0;
            long long int curr=0;
            int j=i;
            while(j<arr.size() && arr[j]>=arr[i]){
                right++;
                j++;
            }
            curr=curr+(arr[i]*right);
            ans+=curr;
            j=i-1;
            while(j>=0 && arr[j]>arr[i]){
                left++;
                j--;
            }
            ans+=(left*curr);
            ans=ans%M;
        }
        return (int)ans;
    }
};