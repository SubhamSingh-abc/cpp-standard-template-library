#include <iostream>     // sort(v.begin(), v.end(), greater<int>());
#include <vector>
#include <algorithm>
using namespace std;
int main () {
    vector<int> v = {10,20,30,40,50,60,70,80,90,100};
    cout << "Before sorting :\n";
    for(auto x : v){
        cout << x << " ";
    }
    cout << "\n";
    sort(v.begin(),v.end(),greater<int>());
    cout << "After sorting :\n";
    for(auto x : v){
        cout << x << " ";
    }
    return 0;
}