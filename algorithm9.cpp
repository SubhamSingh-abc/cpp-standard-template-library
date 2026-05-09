#include <iostream>           // accumulate(start, end, initial_value);
#include <vector>             // O(n) (one pass)
#include <algorithm>          // accumulate() = “process all elements into one result”
#include <numeric>
using namespace std;
int main () {
    vector<int> v = {10,20,30,40,50,60,70,80,90,100};
    int sum = accumulate(v.begin(),v.end(),0);
    cout << "Sum : " << sum << "\n";
    return 0;
}