class Solution {
public:
    unordered_map<string, string> mp;
    string encode(string longUrl) {
        string short_url = "https://tinyurl.com/" + to_string(mp.size());
        mp[short_url] = longUrl;
        return short_url;
    }
    string decode(string shortUrl) {
        return mp[shortUrl];
    }
};