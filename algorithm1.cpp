#include <iostream>          // sorting
#include <vector>            // sort(v.begin(), v.end());
#include <algorithm>         // O(n log n)
using namespace std;
int main () {
    vector<int> v = {70,100,30,80,10,50};
    cout << "Before sorting :\n";
    for(auto x : v){
        cout << x << " ";
    }
    cout << "\n";
    sort(v.begin(),v.end());
    cout << "After sorting :\n";
    for(auto x : v){
        cout << x << " ";
    }
    return 0;
}
/*sort() in C++ uses Introsort:
Starts with Quick Sort
Switches to Heap Sort if needed 
Uses Insertion Sort for small parts*/