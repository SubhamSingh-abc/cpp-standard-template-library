#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;
int main () {
    vector<int> v = {5,10,20};
    int sum_of_squares = accumulate(v.begin(),v.end(),0,[](int a , int b){
        return a + b*b;
    });
    cout << "Sum of squares of vector : " << sum_of_squares << "\n";
    return 0;
}