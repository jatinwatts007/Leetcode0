class Solution {
public:
    char slowestKey(vector<int>& r, string k) {
        char c = k[0];
        int max = r[0];
        int j=1;
        for(int i=1;i<r.size();i++)
        {
            if(r[i]-r[i-1]>max)
            {
                max=r[i]-r[i-1];
                c=k[i];
            }
           else if (r[i]-r[i-1]==max && k[i]>c)
            {
                    c=k[i];
            }
        }
        return c;
    }
};
