class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count=nums.size();
        for(auto i=nums.begin();i!=nums.end();i++)
        {
            if((*i)==val)
            {
                nums.erase(i);
                i--;
                count--;
            }
        }
        return count;
    }
};
