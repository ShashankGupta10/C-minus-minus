class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = INT_MAX;
        int max_profit = 0;

        for (int i: prices) {
            min_price = min(i, min_price);
            max_profit = max(max_profit, i - min_price);
        }
        return max_profit;
    }
};