class Solution {
public:
    int findTheWinner(int n, int k) {
	if(k==1)
		return n;

	vector<int> v;
	for(int i=1 ; i<=n ; ++i)
		v.push_back(i);

	int offset = 0;
	while(v.size()>1) {
		offset = (offset+k-1)%v.size();
		v.erase(v.begin()+offset);
	}
	return v[0];
    }
};
