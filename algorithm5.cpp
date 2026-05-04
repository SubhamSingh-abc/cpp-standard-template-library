#include <iostream>          // lower_bound(v.begin(),v.end(),element);
#include <vector>            // Finds first element ≥ x
#include <algorithm>
using namespace std;
int main () {
    vector<int> v = {10,20,30,40,50,50,60,20,10,30,40};
    cout << "Before sorting :\n";
    for(auto x : v){
        cout << x << " ";
    }
    cout << "\n";
    sort(v.begin(),v.end());
    cout << "After sorting :\n";
    for(auto x : v){
        cout << x << " ";
    }
    cout << "\n";
    auto it = lower_bound(v.begin(),v.end(),30);
    cout << "First element greater than or equal to 30 in vector is " <<*it << "\n";
    cout << "Index of first element greater than or equal to 30 in vector is " << it - v.begin() << "\n";
    return 0;
}