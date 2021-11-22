class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int x = matrix.size();
        int y = matrix[0].size();
        int ans=0;
        int arr [x][y];
        for(int i=0;i<x;i++){
            arr[i][0] = matrix[i][0]-'0';
            if(arr[i][0]>ans) ans=arr[i][0];
        }
        for(int i=0;i<y;i++){
            arr[0][i]=matrix[0][i]-'0';
            if(arr[0][i]>ans) ans=arr[0][1];
        }
        for(int i=1;i<x;i++){
            for(int j=1;j<y;j++){
                if(matrix[i][j]=='1'){
                    arr[i][j]=min(arr[i-1][j],min(arr[i-1][j-1],arr[i][j-1]))+1;
                    if(arr[i][j]>ans) ans = arr[i][j];
                }else arr[i][j]=0;
            }
        }
        return ans*ans;
    }
};
