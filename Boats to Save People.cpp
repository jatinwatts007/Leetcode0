class Solution {
public:
    int numRescueBoats(vector<int>& v, int x) {
        sort(v.begin(),v.end());
	int count=0;
	int  i=0;
	int  j=v.size()-1;
	while(i<j)
	{
		if(v[i]+v[j]<=x)
		{
			i++;
			j--;
		}else{
			j--;
		}
		count++;
	}
 
	if(i==j) return count+1;
	else return count;
        
        
    }
};
