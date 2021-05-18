class Solution {
public:
    vector<string> commonChars(vector<string>& w) {
        vector<string> s;
        int ans[26]={0};
        for(int i=0;i<w[0].length();i++)
        {
            ans[w[0][i]-'a']++;
        }
        for(int i=1;i<w.size();i++)
        {
            int * arr = new int [26]{0};
            for(int j=0;j<w[i].length();j++)
            {
                arr[w[i][j]-'a']++;
            }
            for(int k=0;k<26;k++)
            {
                if(arr[k]<ans[k])
                    ans[k]=arr[k];
            }
            delete [] arr;
        }
        
        for(int i=0;i<26;i++)
        {
            if(ans[i]>0)
            {
                char c=i+97;
                string k(1,c);
                while(ans[i]!=0)
                {
                    s.push_back(k);
                    ans[i]--;
                }
            }
        }
        return s;
    }
};
