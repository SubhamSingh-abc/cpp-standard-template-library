#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int main () {
    vector<int> v = {10,20,100};
    int product = accumulate(v.begin(),v.end(),1,[](int a , int b){
        return a*b;
    });
    cout << "Product : " << product << "\n";
    return 0;
}