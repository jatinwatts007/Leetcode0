class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        return false; 
        int rev = 0;
        int temp=x;
        while (temp != 0) {
            int pop = temp % 10;
            temp /= 10;
            if (rev > INT_MAX/10 || (rev == INT_MAX / 10 && pop > 7)) return false;
            rev = rev * 10 + pop;
        }
        if( rev==x) return true;
        else return false;
    }
};
