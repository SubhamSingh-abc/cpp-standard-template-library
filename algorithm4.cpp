#include <iostream>        // binary search algorithm 
#include <vector>          // O(log n) (very fast)
#include <algorithm>
bool cmp(int a , int b){
    return a<b;
}
using namespace std;
int main () {
    int find;
    vector<int> v = {95,20,50,30,50,60,80,80,90,70};
    cout << "Element to find : ";
    cin >> find;
    sort(v.begin(),v.end(),cmp);
    if(binary_search(v.begin(),v.end(),find) == 1){
        cout << "Element exists in vector\n";
    }else{
        cout << "Element does not exists in vector\n";
    }
    return 0;
}