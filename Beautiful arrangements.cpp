
    int ans=0;
    void helper(int size,vector<bool> &v1,int x)
    {
        if(size==v1.size()-1)
        {
            ans++;
            return;
        }
        for(int i=1;i<=v1.size()-1;i++)
        {
            if(v1[i]==true) continue;
            if((size+1)%i==0 || i%(size+1)==0)
            {
                v1[i]=true;
                helper(size+1,v1,i+1);
                v1[i]=false; 
            }
            
        }
    }
    int countArrangement(int n)
    {
        vector<bool> arr(n+1,false);
        helper(0,arr,0);
        return ans;
        
    }

