class Solution {
public:
    vector<int> constructArray(int n, int k) {
        vector<int>v;
        int i=1;
        int j=n;
        k=k-1;
        int l=0;
        while(l-1<k)
        {
            if(l%2==0)
            {
               v.push_back(i);
                i++;
            }
            if(l%2==1)
            {

                v.push_back(j);
                j--;
            }
            l++;
        }
        if(v.size()==1)
        {
            for(int i=2;i<=n;i++)
            {
                v.push_back(i);
            }
            return v;
        }
        else{}
        if(v[v.size()-1]<v[v.size()-2])
        {
           while(v.size()<n)
            {
                v.push_back(v[v.size()-1]+1);
            }    
        }
        else{
            while(v.size()<n)
            {
                v.push_back(v[v.size()-1]-1);
            }
        }
        return v;
        
    }
};
