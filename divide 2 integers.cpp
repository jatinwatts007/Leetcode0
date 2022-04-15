class Solution {
public:
    int divide(int dividend, int divisor) {
        bool divident_negative = false;
        string s = to_string(dividend);
        if(s[0] == '-') {
            s = s.substr(1);
            divident_negative = true;
            }
        string result = ""; int n = s.size(); int p = 0; string ss = "";
        while(p < n) {
                int r = 0;
                ss += s[p];
                long current = stol(ss);
                if(current >= abs(divisor)) {
                    while(current >= abs((long)divisor))
                        {
                            current -= abs((long)divisor);
                            r++;
                        }
                }
                result += to_string(r);
                ss = to_string(current);
                p++;
            }
    if((divident_negative && divisor < 0) || (!divident_negative && divisor >= 0))   {
        if(stol(result) > INT_MAX)  return INT_MAX;
        else                        return stol(result);
    }            
    else {
        if(stol(result) < INT_MIN)  return INT_MIN;
        else                        return -stol(result);
    }                                           
    }                          
};
