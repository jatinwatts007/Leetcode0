class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(auto i:nums){
            m[i]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(auto itr=m.begin();itr!=m.end();itr++){
            pq.push({itr->second,itr->first});
            if(pq.size()>k){
                pq.pop();
            }
        }
        vector<int> v;
        while(!pq.empty()){
            
            v.push_back(pq.top().second);
            pq.pop();
        }
        return v;
    }
};
