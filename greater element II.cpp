class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int>s;
        vector<int>v(nums.size());
       // return v;
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(s.empty())
            {
                v[i]=-1000000001;
                s.push(nums[i]);
            }else{
                if(nums[i]>=s.top())
                {
                    while(!s.empty() && nums[i]>=s.top())
                    {
                        s.pop();
                    }
                    if(s.empty())
                    v[i]=-1000000001;
                    else v[i]=s.top();
                    s.push(nums[i]);
                    
                    
                }else if(nums[i]<s.top()){
                    v[i]=s.top();
                    s.push(nums[i]);
                }
            }
        }
       // return v;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==-1000000001)
            {
                for(int j=0;j<i;j++)
                {
                    if(nums[j]>nums[i])
                    {
                        v[i]=nums[j];
                        break;
                    }
                }
            }
            if(v[i]==-1000000001) v[i]=-1;
        }
        return v;
        
    }
};
