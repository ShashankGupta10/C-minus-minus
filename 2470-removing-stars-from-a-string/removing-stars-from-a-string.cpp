class Solution {
public:
    string removeStars(string s) {
        
        int i = s.size() - 1;
        int noStars = 0;

        while(i >= 0){
            if(s[i] == '*'){
                noStars++;
            }
            else if(s[i] != '*' && noStars > 0){
                s[i] = '#';
                noStars--;
            }
            i--;
        }

        string ans = "";

        for(int j = 0; j < s.size(); j++){
            if(s[j] != '#' && s[j] != '*'){
                ans.push_back(s[j]);
            }
        }

        return ans;

    }
};