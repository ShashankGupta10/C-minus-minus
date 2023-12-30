class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max_words = 0;
        for (int i=0; i<sentences.size(); ++i) {
            int curr_words = 0;
            for (int j=0; j<sentences[i].size(); j++) {
                if (sentences[i][j] == ' ') curr_words++;
            }
            max_words = max(max_words, curr_words);
        }
        return max_words + 1;
    }
};