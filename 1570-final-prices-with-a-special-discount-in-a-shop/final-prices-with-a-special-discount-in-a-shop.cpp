class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> finalPrices;
        for (int i = 0; i < prices.size(); i++) {
            int discount = 0;
            for (int j = i + 1; j < prices.size(); j++) {
                if (prices[j] <= prices[i]) {
                    discount = prices[j];
                    break;
                }
            }
            finalPrices.push_back(prices[i] - discount);
        }
        return finalPrices;
    }
};