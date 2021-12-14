class Solution {
public:
    
    int nthUglyNumber(int n) {
       int * arr = new int[n];
        int two=2;
        int three = 3;
        int five=5;
        int i2=0,i3=0,i5=0;
        int ugly=1;
        arr[0]=1;
        for(int i=1;i<n;i++){
            ugly= min(two,min(three,five));
            arr[i]=ugly;
            if(ugly==two){
                i2++;
                two = arr[i2]*2;
            }
            if(ugly==three){
                i3++;
                three = arr[i3]*3;
            }
            if(ugly==five){
                i5++;
                five = arr[i5]*5;
            }
        }
    return ugly;
        
    }
};
