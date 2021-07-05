class Solution {
public:
    string removeOccurrences(string s, string p) {
        int count=1;
        while(count!=0)
        {
            count=0;
            for(int i=0;i<s.length();i++)
            {
                int j=0;
                int x=i;
                while(s[x]==p[j] && x<s.length())
                {
                    x++;
                    j++;
                }
                if(j==p.size())
                {
                    s.erase(i,j);
                    count++;
                    break;
                }
            }
        }
        return s;
    }
};
