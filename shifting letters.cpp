class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int sum=0;
        for(int i=s.length()-1;i>=0;i--){
            sum=(sum+shifts[i])%26;
            int  x = s[i]-'a';
            x=(x+sum)%26;
            char c = x+'a';
            s[i]=c;
        }
        return s;
    }
};
