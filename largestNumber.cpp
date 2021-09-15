int * LargestValue(int *arr,n){
             sort(arr, arr+n, compare);
                return arr;
        }
static bool compare(int a, int b) {
        string x = to_string(a), y = to_string(b);
        string s1 = x+y, s2 = y+x;
        return s1 > s2;
    }
