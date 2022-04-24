int preFix(int n,vector<int>v){
    int x =v[0];
    for(int i=1;i<v.size();i++){
        int temp=x;
        v[i]=v[i]^x;
        x=temp;
    }
    return v;
}
