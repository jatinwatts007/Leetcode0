class Solution {
public:
vector<int> avoidFlood(vector<int>& rains) {
set<int> S;

    map <int, int> H;
    vector <int> out;
    int i, temp;
    set <int> ::iterator it;
    for (i = 0; i < rains.size(); i++)
    {
        
        if(rains[i])
        {
            // if the lake is filled for the 1st time
            if(H.find(rains[i]) == H.end())
            {
                H[rains[i]] = i;
                out.push_back(-1);
            }
            // if the lake is filled again, then check if an unused dry day is available 
            // between the previous fill day and the current day
            else if(H.find(rains[i]) != H.end() && (it = S.lower_bound(H[rains[i]] + 1)) != S.end())
            {
                out[*it] = rains[i];
                S.erase(it);
                H[rains[i]] = i;
                out.push_back(-1);
            }
            // lake is already filled
            else
            {
                out.clear();
                return out;
            }
        }
        // if dry day then add it to the set and dry lake 1
        else
        {
            S.insert(i);
            out.push_back(1);
        }
    }
    return out;
}
};
