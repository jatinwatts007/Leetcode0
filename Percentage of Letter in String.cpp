class Solution {
public:
    int percentageLetter(string s, char letter) {
        int x = 0;
        for(int i=0;i<s.length();i++){
            if(s[i]==letter) x++;
        }
        return x*100/s.length();
    }
};
