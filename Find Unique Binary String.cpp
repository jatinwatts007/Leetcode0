class Solution {
public:
    string ans1 = "";
    void ans(string k,int n, unordered_map<string,int>&mp){
        if(ans1!="") return;
        if(k.length()==n){
            if(mp.count(k)==0){
                ans1=k;
            }
            return;
        }
        ans(k+'0',n,mp);
        ans(k+'1',n,mp);
    }
    string findDifferentBinaryString(vector<string>& nums) {
        unordered_map<string,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        ans("",nums.size(),mp);
        return ans1;
    }
};
