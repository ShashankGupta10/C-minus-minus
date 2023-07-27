#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string z = to_string(x);
        string y = z;
        reverse(y.begin(), y.end());
        return z == y;
    }
};
