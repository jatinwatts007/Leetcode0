#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the maxSubsetSum function below.
int maxSubsetSum(vector<int> arr) {
    int x=INT_MIN;
    int max1=arr[arr.size()-1],max2=arr[arr.size()-2];
    if(max1<0 ) max1=0;
    if(max2<0) max2=0;
     for(int i=arr.size()-3;i>=0;i--)
     {
        int temp=max1;
        if(max2>max1) max1=max2;
        if(arr[i]>0)
        max2=arr[i]+temp;
        else max2=temp;
        
        //if(max2<0) max2=0;
       // if(max1<0) max1=0;
        if(max1>x) x=max1;
        if(max2>x) x=max2;
     }
     if(arr.size()==2) x= max(arr[0],arr[1]);
     if(x<0) return 0;
     return x;
        

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    int res = maxSubsetSum(arr);

    fout << res << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
