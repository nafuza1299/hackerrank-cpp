#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int N;
    cin >> N;
    
    vector<int> v;
    
    for(int i{0}; i < N; i++){
        int vi;
        cin >> vi;
        v.push_back(vi);
    }
    
    sort(v.begin(), v.end());
    
    for(auto &x: v){
        cout << x << " ";
    }
    
    return 0;
}
