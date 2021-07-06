class Solution {
public:
    int rev(int n){
    int res = 0;
    while(n){
        int t = n % 10;
        n /= 10;
        res = (res * 10) + t;
    }
    return res;
}
int countNicePairs(vector<int>& nums) {
    unordered_map<int,int> mp;
    long long int res = 0;
    for(int i = 0; i < nums.size(); i++){
        int temp = nums[i] - rev(nums[i]);
        if(mp.find(temp) != mp.end()){
            res += mp[temp] % 1000000007;
        }
        mp[temp]++;
    }
    return res % 1000000007;
}
};
