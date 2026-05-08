#include <iostream>                      // unique(it,v.end());
#include <vector>
#include <algorithm>
using namespace std;
int main () {
    vector<int> v = {10,20,30,30,40,50,50,50,60,60,50,60,60,70,70,80};
    for(auto x : v){
        cout << x << " ";
    }
    cout << "\n";
    auto it = unique(v.begin(),v.end());
    v.erase(it,v.end());
    for(auto x : v){
        cout << x << " ";
    }
    cout << "\n";
    return 0;
}