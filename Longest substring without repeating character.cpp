int lengthOfLongestSubstring(string s) {
        string s1="";
        int arr[127]={0};
        int i=0;
        int j=0;
        int count;
        while(i<s.length())
        {
            count=0;
            arr[s[i]-' ']++;
            for(int k=0;k<127;k++)
            {
                if(arr[k]>1)
                {
                    arr[s[j]-' ']--;
                    j++;
                    count++;
                    break;
                }
            }
            if(count>0)
            {
                i++;
                continue;
            }
            if((i-j)+1>s1.length())
            {
                s1=s.substr(j,(i-j)+1);
            }
            i++;
        }
            

        return s1.length();
    }

