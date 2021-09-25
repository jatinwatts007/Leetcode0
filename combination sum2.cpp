class Solution {
public:
    int back(vector<int> &arr,vector<vector<int>>&v,vector<int>v1,int t,int i,int sum)
    {
        if(sum==t)
        {
            v.push_back(v1);
            
            return 1;
        }
        for(int k=i;k<arr.size();k++)
        {
            v1.push_back(arr[k]);
             if(v.size()!=0 && v[v.size()-1].size()>v1.size())
                {
                 int b=0;
                    for(int l=0;l<v1.size();l++)
                    {
                        if(v[v.size()-1][l]!=v1[l])
                        {
                           b++;
                            break;
                        }
                    }
                 if(b==0)
                 {
                     v1.pop_back();
                     continue;
                 }
                }
            if(sum+arr[k]>t) return 0;
            
           if(k==arr.size()-1)
           {
               if(sum+arr[k]==t)
                {
                    v.push_back(v1);
                    return 0; 
               }
           }
            int x = back(arr,v,v1,t,k+1,sum+arr[k]);
            if(x==0)
            {
                v1.pop_back();
                continue;
            }
            if(x==1)
            {
                return 0;
            }
            
        }
        return 0;
        
    }
    vector<vector<int>> combinationSum2(vector<int>& c, int t) {
        sort(c.begin(),c.end());
        vector<vector<int>> v;
        int x = accumulate(c.begin(),c.end(),0);
        if(x<t) return v;
        vector<int>v1;
        back(c,v,v1,t,0,0);
        return v;
    }
};
