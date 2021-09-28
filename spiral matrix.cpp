class Solution {
public:
    /*#include<bits/stdc++.h>
    using namespace std;*/
    
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> v;
    int row=matrix.size(),column=matrix[0].size();
    int top=0,bottom=row-1,left=0,right=column-1;
    int z = 1;
    while(top<=bottom && left<=right){
        for(int i=left;i<=right;i++){
            matrix[top][i] = z++;
        } 
          top++;
        for(int i=top;i<=bottom;i++){
            matrix[i][right]=z++;
        } 
          right--;
        if(top<=bottom){
        for(int i=right;i>=left;i--){
            matrix[bottom][i] = z++;
        }  
          bottom--;
        }
        if(left<=right){
        for(int i=bottom;i>=top;i--){
            matrix[i][left]=z++;
        } 
          left++;
        }
        }
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(j!=matrix[0].size()-1)
                    cout<<matrix[i][j]<<" ";
                else
                    cout<<matrix[i][j];
            }
            cout<<endl;
        }
        return v;
    }
    int main(){
        int a;
        cin>>a;
        vector<vector<int>> v(a,vector<int>(a));
        spiralOrder(v);
    }
};
