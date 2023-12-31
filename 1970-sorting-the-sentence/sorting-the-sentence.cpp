#include <sstream>

class Solution {
public:
    string sortSentence(string s) {
        vector<string> v(200, "");
        string curr_word = "";
        istringstream ss(s);
        string final_sentence = "";
        
        while (ss >> curr_word) {
            int index = curr_word.back() - '0';
            curr_word.pop_back();
            v[index] = curr_word;
        }
        for (int i = 1; i < v.size(); ++i) {
            if (!v[i].empty()) final_sentence += v[i] + " ";
        }
        final_sentence.pop_back();
        return final_sentence;
    }
};
