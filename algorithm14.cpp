#include <iostream>  /*Reverse (VERY USEFUL): reverse(v.begin() + 1, v.begin() + 4);*/
#include <algorithm>    // Time Complexity: O(n)
#include <vector>
using namespace std;
int main () {
    vector<int> v = {10,20,30,40,50,60,70,80,90,100};
    for(auto x : v){
        cout << x << " ";
    }
    cout << "\n";
    reverse(v.begin()+2,v.end()-3);
    for(auto x : v){
        cout << x << " ";
    }
    return 0;
}