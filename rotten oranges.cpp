class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int ans = 0;
        int c1 = 0, c2 = 0;
        queue<vector<int>> q = {};
        int n = grid.size();
        int m = grid[0].size();
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(grid[i][j]==2) {
                    q.push({i,j});
                    c2++;
                }
                if(grid[i][j]==1) c1++;
            }
        }
        if(c1==0) return ans;
        while(!q.empty()) {
            vector<int> tmp = q.front();
            q.pop();
            int i = tmp[0], j = tmp[1];
            if(i>0 && grid[i-1][j]==1) {
                q.push({i-1, j});
                grid[i-1][j] = 2;
                c1--;
            }
            if(i<n-1 && grid[i+1][j]==1) {
                q.push({i+1, j});
                grid[i+1][j] = 2;
                c1--;
            }
            if(j>0 && grid[i][j-1]==1) {
                q.push({i, j-1});
                grid[i][j-1] = 2;
                c1--;
            }
            if(j<m-1 && grid[i][j+1]==1) {
                q.push({i, j+1});
                grid[i][j+1] = 2;
                c1--;
            }
            c2--;
            if(c2==0) {
                c2 = q.size();
                if(c2>0) ans++;
            }
        }
        if(c1>0) return -1;
        else return ans;
    }
};
