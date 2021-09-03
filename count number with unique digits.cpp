class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        
        if(n==0)
            return 1;
        
        int ans=10;
        int cnt=9;
        for(int i=0;i<n-1;i++)
        {
            cnt=cnt*(9-i);
            ans=ans+cnt;
        }
        return ans;
    }
};
