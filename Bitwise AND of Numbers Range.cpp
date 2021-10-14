class Solution {
public:
    int rangeBitwiseAnd(int l, int r) {
        int ans=2;
        while(ans<r){
            if(ans>l && ans<=r) return 0;
            ans*=2;
            if(ans== 1073741824) break;
        }
        int res = l;
        for (long i = l; i <= r; i++)
            res &= i;
                
        return res;
    }
};
