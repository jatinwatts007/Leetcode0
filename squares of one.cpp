class Solution {
public:
    int countSquares(vector<vector<int>>& m) {
        int sum=0;
        for(int i=0;i<m.size();i++)
        {
            if(m[i][0]==1) sum++;
        }
        for(int i=1;i<m[0].size();i++)
        {
            if(m[0][i]==1) sum++;
        }
        for(int i=1;i<m.size();i++)
        {
            for(int j=1;j<m[i].size();j++)
            {
                if(m[i][j]!=1) continue;
                int x = min(m[i-1][j],min(m[i-1][j-1],m[i][j-1]))+1;
                sum+=x;
                m[i][j]=x;
            }
        }
        return sum;
    }
};
