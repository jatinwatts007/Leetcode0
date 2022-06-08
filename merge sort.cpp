long long int ans=0;
    void merge(long long l1,long long r1,long long l2,long long r2,long long arr[]){
        vector<int>v;
        int i=l1;
        int j=l2;
        while(i<=r1 && j<=r2){
            if(arr[i]<= arr[j]){
                v.push_back(arr[i]);
                i++;
            }else{
                v.push_back(arr[j]);
                j++;
                ans+=((r1-i)+1);
            }
        }
        while(i<=r1){
            v.push_back(arr[i++]);
        }
        while(j<=r2) v.push_back(arr[j++]);
        for(long long i=l1;i<=r2;i++){
            arr[i] = v[i-l1];
        }
    }
    void mergesort(long long l,long long r,long long arr[]){
        if(l>=r) return;
        int mid = l+(r-l)/2;
        mergesort(l,mid,arr);
        mergesort(mid+1,r,arr);
        merge(l,mid,mid+1,r,arr);
    }
    long long int inversionCount(long long arr[], long long n)
    {
        mergesort(0,n-1,arr);
        return ans;
        // Your Code Here
    }

};
