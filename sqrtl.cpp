#include <cmath>
#include <iomanip>
#include <iostream>
  
using namespace std;
  
int main()
{
    long long int val1 = 1000000000000000000;
    long long int val2 = 999999999999999999;
  
    cout << fixed << setprecision(12) << sqrt(val1) << endl;
    cout << fixed << setprecision(12) << sqrt(val2) << endl;
  
    return (0);
}
