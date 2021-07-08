class Solution {
public:
    int minSteps(string s, string t) {
       map<char, int> mymap;
        for(int i=0; i< s.length(); i++){
                mymap[s[i]] += 1;
            }
        int counter = 0;
        int upto = 0;
        for (auto i: t){
            if (mymap[i] != 0 && upto <= t.size()){
                mymap[i] -= 1;
            } else{
                counter += 1;
            }
            upto += 1;
        }
        return counter;
    }
};
