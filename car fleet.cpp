class Solution {
public:
    
    int carFleet(int target, vector<int>& p, vector<int>& s) {
        vector<pair<int,int>>v;
        for(int i=0;i<p.size();i++){
            v.push_back({target-p[i],s[i]});
        }
        sort(v.begin(),v.end());
        int fleet =1;
        int start =0;
        int i=1;
        while(i<p.size()){
            if(1ll*(v[i].first)*1ll*(v[start].second) > 1ll*(v[i].second) * (1ll*(v[start].first))){
                fleet++;
                start = i;
            }
            i++;
        }
        return fleet;
    }
};
