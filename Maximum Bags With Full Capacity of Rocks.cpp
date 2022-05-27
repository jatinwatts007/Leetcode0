class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int r) {
        map<int,int>mp;
        for(int i=0;i<capacity.size();i++){
            mp[capacity[i]-rocks[i]]++;
        }
        int ans=0;
        for(auto it=mp.begin();it!=mp.end();it++){
            if(r<it->first) break;
            if(it->first*it->second<=r) {
                ans+=(it->second);
                r-=(it->first*it->second);
            }else{
                ans+=(r/(it->first));
                r=r%it->first;
            }
        }
        
        return ans;
    }
};
