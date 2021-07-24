class Solution {
public:
    int smallestChair(vector<vector<int>>& times, int target) {
        vector<pair<vector<int>,int>> v;
        int maxi =-1;
        int mini = 100005;
        for(int i=0;i<times.size();i++){
            v.push_back({times[i],i});
            maxi = max(maxi,times[i][1]);
            mini = min(mini,times[i][0]);
        }
        sort(v.begin(),v.end());
        priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>> pq;
        priority_queue<int,vector<int>,greater<int>> q;
        for(int i=0;i<times.size();i++){
            q.push(i);
        }
        int i=mini;
        int j=0;
        while(i<=maxi){
            
            while(pq.size()>0 && pq.top().first<=i){
                q.push(pq.top().second);
                pq.pop();
            }
            if(i==v[j].first[0] && v[j].second==target){
                return q.top();
            }
            if(i==v[j].first[0]){
                pq.push({v[j].first[1],q.top()});
                q.pop();
                j++;
            }
            i++;
        }
        return times.size();
    }
};
