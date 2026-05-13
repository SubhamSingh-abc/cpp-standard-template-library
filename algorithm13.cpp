#include <iostream>     // reverse();
#include <vector>
#include <algorithm>
using namespace std;
int main () {
    vector<int> v = {10,20,30,40,50,60,70,80,90,100};
    for(auto x : v){
        cout << x << " ";
    }
    cout << "\n";
    reverse(v.begin(),v.end());
    for(auto x : v){
        cout << x << " ";
    }
    return 0;
}