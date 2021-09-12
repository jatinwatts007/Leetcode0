class Solution {
public:
    int count=0;
    void ans(vector<int>&v,vector<int>&r,int i){
        if(v.size()==4){
            cout<<v[0]<<v[1]<<v[2]<<v[3]<<endl;
            count++;
            return;
        }
        if(i==r.size()) return;
        if(r[i]>v[v.size()-1]){
            v.push_back(r[i]);
            ans(v,r,i+1);
            v.pop_back();
           // ans(v,r,i+1);
        }
        ans(v,r,i+1);
    }
    int numTeams(vector<int>& r) {
       vector<int> v;
       v.push_back(-1); 
        ans(v,r,0);
        reverse(r.begin(),r.end());
        v.clear();
        v.push_back(-1);
        ans(v,r,0);
        return count;
    }
};
