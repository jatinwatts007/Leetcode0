class Solution {
public:
    int maxIceCream(vector<int>& c, int coins) {
        sort(c.begin(),c.end());
        int count=0;
            for(int i=0;i<c.size();i++)
            {
                if(coins-c[i]>=0)
                {
                    coins-=c[i];
                    count++;
                }
                else{
                    break;
                }
            }
        return count;
    }
};
