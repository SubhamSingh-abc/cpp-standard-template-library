#include <iostream>          // upper_bound(v.begin(),v.end(),element);
#include <vector>            // Finds first element > x
#include <algorithm>
using namespace std;
int main () {
    vector<int> v = {10,20,30,40,50,60,70,80,90,100};
    auto it = upper_bound(v.begin(),v.end(),50);
    cout << "First element greater than 50 : " << *it << "\n";
    cout << "Index of first element greater than 50 : " << it - v.begin() << "\n";
    return 0;
}