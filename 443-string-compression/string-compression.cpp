class Solution {
public:
    int compress(vector<char>& chars) {
        int count = 1;
        vector<char>ch;
        if(chars.size() == 1)
        {
            return 1;
        }
        ch.push_back(chars[0]);
        for(int i = 0;i<chars.size()-1;i++)
        {
            if(chars[i] == chars[i+1])
            {
                count++;
            }
            else
            {
                if(count>1)
                {
                    string s = to_string(count);
                    for(int i = 0 ;i<s.length();i++)
                    {
                        ch.push_back(s[i]);
                    } 
                }
                count = 1;
                ch.push_back(chars[i+1]);
            }
        }
        if(count>1)
        {
           string s = to_string(count);
            for(int i = 0 ;i<s.length();i++)
            {
                ch.push_back(s[i]);
            }  
        }
        for(int i = 0 ;i<ch.size();i++)
        {
            chars[i] = ch[i];
        }
        return ch.size();
    }
};