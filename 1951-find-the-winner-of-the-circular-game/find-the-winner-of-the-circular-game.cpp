#include <vector>
using namespace std;

class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> v(n);
        for (int i = 0; i < n; i++) v[i] = i + 1;
        int it = 0;
        while (v.size() != 1) {
            it = (it + k - 1) % v.size();
            v.erase(v.begin() + it);
        }
        return v[0];
    }
};
