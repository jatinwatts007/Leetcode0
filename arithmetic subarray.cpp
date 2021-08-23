class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> ans(l.size(),false);
        for(int i = 0;i<l.size();++i)
        {
            vector<int> t(begin(nums)+l[i],begin(nums)+r[i]+1);
            sort(begin(t),end(t));
            bool f = true;
            int diff = t[1]-t[0];
            for(int j = 2;j<t.size();++j)
            {
                if(t[j]-t[j-1]!=diff)
                {
                    f = false;
                    break;
                }
            }
            ans[i] = f;
        }
        return ans;
    }
};
