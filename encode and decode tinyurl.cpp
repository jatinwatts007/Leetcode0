class Solution {
public:
    unordered_map<string, string> mp;
    int c = 0;
    string encode(string longUrl) {
        c++;
        string shortUrl = to_string(c);
        mp[shortUrl] = longUrl;
        return shortUrl;
    }
    string decode(string shortUrl) {
        return mp[shortUrl];
    }
};
