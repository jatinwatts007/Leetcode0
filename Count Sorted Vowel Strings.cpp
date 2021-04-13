class Solution {
public:
    int count(int n, char c){
        if(n==1){
            if(c=='a'){
                return 5;
            }
            if(c=='e'){
                return 4;
            }
            if(c=='i'){
                return 3;
            }
            if(c=='o'){
                return 2;
            }
            if(c=='u'){
                return 1;
            }
        }
        int ans=0;
        if(c=='a'){
            ans+=count(n-1,'a');
            ans+=count(n-1,'e');
            ans+=count(n-1,'i');
            ans+=count(n-1,'o');
            ans+=count(n-1,'u');
        }
        if(c=='e'){
            ans+=count(n-1,'e');
            ans+=count(n-1,'i');
            ans+=count(n-1,'o');
            ans+=count(n-1,'u');
        }
        if(c=='i'){
            ans+=count(n-1,'i');
            ans+=count(n-1,'o');
            ans+=count(n-1,'u');
        }
        if(c=='o'){
            ans+=count(n-1,'o');
            ans+=count(n-1,'u');
        }
        if(c=='u'){
            ans+=count(n-1,'u');
        }
        return ans;
    }
    int countVowelStrings(int n) {
        if(n==1){
            return 5;
        }
        int ans=0;
        ans+=count(n-1,'a');
        ans+=count(n-1,'e');
        ans+=count(n-1,'i');
        ans+=count(n-1,'o');
        ans+=count(n-1,'u');
        return ans;
    }
};
