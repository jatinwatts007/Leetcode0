class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int x;
        if(ruleKey=="type") x=0;
        if(ruleKey=="color") x=1;
        if(ruleKey=="name") x=2;
        int count=0;
         for(int i=0;i<items.size();i++)
         {
             if(items[i][x]==ruleValue) count++;
         }
        return count;
        
    }
};
