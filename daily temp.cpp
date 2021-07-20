class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        stack<pair<int,int>>s;
        for(int i=t.size()-1;i>=0;i--)
        {
            if(s.empty())
            {
                pair<int,int>p{t[i],i};
                t[i]=0;
                
                s.push(p);
            }
            else
            {
                while(!s.empty())
                {
                    if(s.top().first>t[i])
                    {
                        pair<int,int>p{t[i],i};
                        t[i]=s.top().second-i;
                        
                        s.push(p);
                        break;
                    }
                    else
                    {
                        s.pop();
                    }
                }
                if(s.empty())
                {
                    pair<int,int>p{t[i],i};
                    t[i]=0;
                    
                    s.push(p);
                }
            }
        }
        return t;
        
    }
};
