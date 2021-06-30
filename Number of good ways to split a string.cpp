class Solution {
public:
    int numSplits(string s) {
        unordered_map<char, int> umap1;
        unordered_map<char, int> umap2;
        int count = 0;
        for(int i = 0; i < s.size(); i++) {
            umap1[s[i]]++;
        }
        for(int i = 0; i < s.size() - 1; i++) {
            umap2[s[i]]++;
            umap1[s[i]]--;
            if(umap1[s[i]] <= 0) umap1.erase(s[i]);
            if(umap1.size() == umap2.size()) count++;
            if(umap1.size() < umap2.size()) break;
        }
        return count;
    }
};
