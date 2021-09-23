class Solution {
public:
        void dfs(vector<vector<int>>& matrix , int i , int j){
        matrix[i][j] = 0;
        
        for(int k = 0 ; k < matrix.size() ; ++k){
            if(matrix[j][k] == 1)
                dfs(matrix , j , k);
        }
    }
    int findCircleNum(vector<vector<int>>& matrix) {
        int row = matrix.size();
        if(row == 0) return 0;
        int col = matrix[0].size();
        int counter =0;
        
        for(int i = 0; i < row ; ++i){
            for(int j = 0 ; j< col ; ++j){
                if(matrix[i][j] == 1){
                    counter++;
                    dfs(matrix , i ,j);
                }                           
            }            
        }
        return counter;
    }
};
