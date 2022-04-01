class Solution {
public:
    int minSwapsCouples(vector<int>& row) {
        int n = row.size();
        vector<int>v(n);
        for(int i=0;i<n;i++){
            v[row[i]] = i;
        }
        int count=0;
        for(int i=0;i<row.size();i+=2){
                if(row[i]%2==0 && (row[i+1]<row[i] || abs(row[i+1]-row[i])!=1)){
                    int x = v[row[i]+1];
                    int y = row[i+1];
                    swap(row[i+1],row[v[row[i]+1]]);
                    v[row[i]+1] = i+1;
                    v[y] = x;
                    count++;
                }
                if(row[i]%2==1 && (row[i+1]>row[i] || abs(row[i+1]-row[i])!=1)){
                    int x = v[row[i]-1];
                    int y = row[i+1];
                    swap(row[i+1],row[v[row[i]-1]]);
                    v[row[i]-1] = i+1;
                    v[y] = x;
                    count++;
                }
        }
        return count;
    }
};
