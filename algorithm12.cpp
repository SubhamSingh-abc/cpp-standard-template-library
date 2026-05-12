#include <iostream>          // next_permutation(v.begin(),v.end());
#include <vector>           
#include <algorithm>
#include <numeric>
using namespace std;
int main () {
    vector<int> v = {1,2,3};
    for(auto x : v){
        cout << x << " ";
    }
    cout << "\n";
    next_permutation(v.begin(),v.end());
    for(auto x : v){
        cout << x << " ";
    }
    cout << "\n";
    next_permutation(v.begin(),v.end());
    for(auto x : v){
        cout << x << " ";
    }
    cout << "\n";
    next_permutation(v.begin(),v.end());
    for(auto x : v){
        cout << x << " ";
    }
    cout << "\n";
    next_permutation(v.begin(),v.end());
    for(auto x : v){
        cout << x << " ";
    }
    cout << "\n";
    next_permutation(v.begin(),v.end());
    for(auto x : v){
        cout << x << " ";
    }
    cout << "\n";
    next_permutation(v.begin(),v.end());
    for(auto x : v){
        cout << x << " ";
    }
    return 0;
}