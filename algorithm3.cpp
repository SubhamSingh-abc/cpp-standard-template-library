#include <iostream>           // cmp
#include <vector>             // sorting
#include <algorithm>
using namespace std;
bool cmp (int a , int b){
    return a>b;
}
int main () {
    vector<int> v = {10,20,30,40,50,60,70,80,90,100};
    cout << "Before sorting :\n";
    for(auto x : v) {
        cout << x << " ";
    }
    cout << "\n";
    sort(v.begin(),v.end(),cmp);
    cout << "After sorting :\n";
    for(auto x : v) {
        cout << x << " ";
    }
    return 0;
}