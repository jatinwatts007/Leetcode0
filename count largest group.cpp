class Solution {
public:
    int countLargestGroup(int n) {
        int max=0;
        map<int,int>mp;
        for(int i=1;i<=n;i++)
        {
            int sum=0;
            int j=i;
            while(j>0)
            {
                sum+=j%10;
                j/=10;
            }
            mp[sum]++;
            if(mp[sum]>max) max=mp[sum];
        }
        int count=0;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->second==max) count++;
        }
        return count;
    }
};
