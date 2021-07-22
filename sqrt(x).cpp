class Solution {
public:
    int mySqrt(int x) {
    if(x==0 || x==1) return x;
    long long s = 0;
	long long e = x;
	long long m = (s+e)/2;                  
	while(s<e){                      
		if(m*m==x){
			return m;
		}
		if(m*m>x){
			e = m;
		}
		else{
			s=m;
		}
		m = (s+e)/2;
		if(m==s || m==e)
			break;
	}
	
   return m;
    }
};
