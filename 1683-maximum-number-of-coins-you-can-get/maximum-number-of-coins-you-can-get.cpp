class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end(), greater<int>());
        int num = piles.size() / 3;
        int sum = 0, idx = 1;
        while (num--) {
            sum += piles[idx];
            idx += 2;
        }
        return sum;
    }
};