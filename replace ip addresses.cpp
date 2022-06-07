class Solution {
public:
    void helper(string s,string k,vector<string>&ans,int i,int count){
        if(i>=s.length()) return ;
        if(count==3){
            if(s.length()-i>3 ) return;
            else if(s[i]=='0' && i!=s.length()-1) return;
            else{
                int temp=0;
                int x=i;
                while(i<s.length()){
                    
                    temp=temp*10;
                    temp+=(s[i]-'0');
                    i++;
                }
                if(temp>255) return;
                
                ans.push_back(k+s.substr(x,s.length()-i-1));
                return;
            }
        }
            int temp=0;
            for(int j=1;j<=3;j++){
                if(s[i]=='0' && j==1){
                    helper(s,k+"0.",ans,i+1,count+1);
                    return;
                }else{
                    temp=temp*10;
                    temp+=(s[i]-'0');
                    if(temp<=255){
                        helper(s,k+to_string(temp)+'.',ans,i+1,count+1);
                    }else{
                        return;
                    }
                }
                i+=1;
            }
        
    }
    vector<string> restoreIpAddresses(string s) {
        vector<string>ans;
        if(s.length()>12) return ans; 
        helper(s,"",ans,0,0);
        return ans;
    }
};
