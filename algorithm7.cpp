#include <iostream>          // remove(v.begin(),v.end(),element);
#include <vector>            // erase(it,v.end());
#include <algorithm>
using namespace std;
int main () {
    vector<int> v = {50,20,30,40,50,50,70,80};
    for(auto x : v){
        cout << x << " ";
    }
    auto it = remove(v.begin(),v.end(),50);
    v.erase(it,v.end());
    cout << "\n";
    for(auto x : v){
        cout << x << " ";
    }
    return 0;
}