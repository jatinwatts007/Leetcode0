class Solution {
public:
    int romanToInt(string s) {
        map <char,int> value;
value['I']=1;
value['V']=5;
value['X']=10;
value['L']=50;
value['C']=100;
value['D']=500;
value['M']=1000;
int index=0,answer=0;

if(s.length()==1)
	return value[s[0]];

while(index<=s.length()-2){
	if(value[s[index]]>=value[s[index+1]]){
		answer+=value[s[index]];
		index++;
	}
		
	else{
		answer+=value[s[index+1]]-value[s[index]];
		index+=2;
	}	
}
if (index==s.length()-1)
	answer+=value[s[index]];

return answer;
    }
};
