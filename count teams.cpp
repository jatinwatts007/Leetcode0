class Solution {
public:
    int numTeams(vector<int>& rating) {
        unordered_map<int,int>ump;
        int n = rating.size();
        int ans1=0;
        int ans2=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(rating[i]<rating[j]){
                    ump[i]++;
                }
            }
        }
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(rating[i]<rating[j]){
                    ans1+=ump[j];
                }
            }
        }
        ump.clear();
        for(int i=n-1;i>=1;i--){
            for(int j=i-1;j>=0;j--){
                if(rating[i]<rating[j]){
                    ump[i]++;
                }
            }
        }
        for(int i=n-1;i>=1;i--){
            for(int j=i-1;j>=0;j--){
                if(rating[i]<rating[j]){
                    ans2+=ump[j];
                }
            }
        }
        return ans1+ans2;
        
    }
};
