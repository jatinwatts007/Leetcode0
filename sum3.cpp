class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int all=0;
        for(int i=0;i<arr.size();i++)
        {
            all+=arr[i];
        }
        if(all%3!=0) return false;
        int sum1=0;
        int x=all/3;
        int i=0;
        while(i<arr.size())
        {
            sum1+=arr[i];
            i++;
            if(sum1==x)
            {
                int sum2=0;
                int j;
                for( j=i;j<arr.size();j++)
                {
                    sum2+=arr[j];
                    if(sum2==x && j<arr.size()-1) return true;
                }
            }
        }
        return false;
    }
};
