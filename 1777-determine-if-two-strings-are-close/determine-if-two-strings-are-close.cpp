class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()!=word2.size())return 0;
        unordered_map<char,int>mapp1;
        unordered_map<char,int>mapp2;
        for(auto i:word1) mapp1[i]++;
        for(auto i:word2) mapp2[i]++;
        string W1="",W2="";
        for(auto i:mapp1)W1+=to_string(i.first)+to_string(i.second);
        for(auto i:mapp2)W2+=to_string(i.first)+to_string(i.second);
        sort(W1.begin(),W1.end());
        sort(W2.begin(),W2.end());
        return W1==W2;

    }
};