class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
       
        
        vector<string> res;
        vector<int> maxFreq(26,0);
        
        for(int i=0;i<words2.size();i++)
        { 
            string query=words2[i];
            vector<int> freq(26,0);
            
            for (int j = 0;j< query.size(); j++) 
                freq[query[j] - 'a']++;
            
            for(int i=0; i<26; i++)
                maxFreq[i] = max(maxFreq[i], freq[i]);
            
        }
        
       
        for(int i=0;i<words1.size();i++)
        {
          string str = words1[i];
          bool flag = true;
          for(int i=0; i<26; i++)
          {
              if(maxFreq[i] >count(str.begin(), str.end(), (i+'a') ))
                {
                    flag = false;
                    break;
                }
              
          }
            
            if(flag)
                res.push_back(str);
        }
 return res;
        }
}
