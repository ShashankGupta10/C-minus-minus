#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count = 0;
        for (int i = 0; i < words.size(); i++) {
            int j;
            for (j = 0; j < words[i].size(); j++) {
                if (allowed.find(words[i][j]) == string::npos) break;
            }
            if (j == words[i].size()) count++;
        }
        return count;
    }
};
