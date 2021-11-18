void helper(string s, string k,int & ans){
    int count=0;
    for(int i=0;i<s.length();i++){
        if(s[i]!=k[i]) count++;
    }
    ans+=count;
    
}




vector<string>v;
v.push_back("1111110");
v.push_back("0110000");
v.push_back("1101101");
v.push_back("1111001");
v.push_back("0110011");
v.push_back("1011011");
v.push_back("0011111");
v.push_back("1110000");
v.push_back("1111111");
v.push_back("1110011");
int ans=0;
helper(v[str[0]-'0'],"0000000",ans);

for(int i=1;i<str.length();i++){
    helper(v[s[i-1]-'0'],v[s[i]-'0'],ans);
}
return ans;
