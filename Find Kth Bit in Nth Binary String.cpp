class Solution {
public:
  char findKthBit(int n, int k) {
    string s = "0";
    
    while(s.size() <= k){
      s.push_back('1');
      for(int j = s.size() - 2; j >= 0; j--) 
        s[j] == '0' ? s.push_back('1') : s.push_back('0');     
    }
    
    return s[k-1];
  }
};
