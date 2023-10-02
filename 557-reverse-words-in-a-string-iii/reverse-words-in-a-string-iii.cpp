class Solution {
public:
    string reverseWords(string s) {   
        int i=0,j=0;  
        while (j<s.size()) {
            if (s[j]==' ') {
                reverse(s.begin()+i, s.begin()+j);
                j++;
                i=j;
            }
            else j++;
        }
        reverse(s.begin()+i, s.begin()+j);
        return s;
    }
};