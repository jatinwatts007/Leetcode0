class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> um;
    stack<int> s;
    vector<int> ans;
    
    for(int i=0 ; i<nums2.size() ; i++)
    {
        if(s.empty()) s.push(nums2[i]);
        else
        {
            while(!s.empty() && s.top()<nums2[i])
            {
                um.insert(make_pair(s.top() , nums2[i]));
                s.pop();
            }
            s.push(nums2[i]);
        }
    }
    
    for(int i=0 ; i<nums1.size() ; i++)
    {
        int key = nums1[i];
        if(um.find(key) != um.end()) ans.push_back(um[key]);
        else ans.push_back(-1);
    }
    
    return ans;
    }
};
