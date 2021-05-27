class Solution {
public:
    int addDigits(int num) {
        int sum=0;
        while(num>0)
        {
            sum+=num%10;
            num=num/10;
        }
        while(sum>=10)
        {
            int k=sum;
            sum=0;
            while(k>0)
            {
                sum+=k%10;
                k=k/10;
            }
        }
        return sum;
    }
};
