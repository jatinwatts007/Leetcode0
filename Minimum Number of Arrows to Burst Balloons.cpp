class Solution {
public:
    static bool cmp(vector<int>&a, vector<int>&b){
     return a[1]<b[1];
      }
    int findMinArrowShots(vector<vector<int>>& p)
    {
        sort(p.begin(),p.end(),cmp);
        int ans=1;
        int prev=p[0][1];
        for(int i=1;i<p.size();i++){
            if(prev>=p[i][0]){
                continue;
            }
            else{
                ans++;
                prev=p[i][1];
           }
        }
        return ans;
    }
};
