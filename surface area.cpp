class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        if(grid.size()==1) return 4*grid[0][0]+2;
        int sum=0;
        int count=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==0)
                {
                    count++;
                }
                if( (i==0 && j==0) || (i==grid.size()-1 && j==grid.size()-1) || (i==0 && j==grid.size()-1) || (i==grid.size()-1 && j==0))
                {
                    sum+=(2*grid[i][j]);
                }
                else if(i==0 || j==0 || i==grid.size()-1 || j== grid.size()-1)
                {
                    sum+=(grid[i][j]);
                }
                
                int x=i;
                int y=j;
                if(x+1<grid.size() && y<grid[0].size())
                {
                    sum+=abs(grid[x][y]-grid[x+1][y]);
                }
                if(x<grid.size() && y+1<grid[0].size())
                {
                    sum+=abs(grid[x][y]-grid[x][y+1]);
                }
            }
        }
        int x = grid.size()*grid.size();
        x=x-count;
        sum+=(2*x);
        return sum;
        
    }
};
