class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_set<string> st;
        vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        for (int i=0; i<words.size();i++) {
            string word = "";
            for (int j=0;j<words[i].size();j++) {
                word += morse[words[i][j] - 97];
            }
            st.insert(word);
        }
        return st.size();
    }
};