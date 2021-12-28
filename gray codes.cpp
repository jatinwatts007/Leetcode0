class Solution {
public:
     vector<int> grayCode(int n) {
        vector<int>ans{0, 1};
        int i = 1;
        while(i < n){
            int t = ans.size();
            int add = int(pow(2, i));
            for(int j = t-1; j >= 0;j--){
                ans.push_back(ans[j] + add);
            }
            i++;
        }
        return ans;
    }
   
};
