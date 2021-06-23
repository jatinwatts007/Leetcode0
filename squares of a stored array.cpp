class Solution {
public:
    vector<int> sortedSquares(vector<int>& v) {
        vector<long long> v1;
        vector<int> b;
        int x = v.size();
        int i=0;
        int j = v.size()-1;
        while(i<=j)
        {
            if(v[i]*v[i]>v[j]*v[j])
            {
                b.push_back(v[i]*v[i]);
                i++;
            }else{
                b.push_back(v[j]*v[j]);
                j--;
            }
        }
        reverse(b.begin(),b.end());
        return b;
    }
};
