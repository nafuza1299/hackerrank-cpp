#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n, q;
    cin >> n;
    cin >> q; 
    vector<vector<int>> v; 

    for(int i{0}; i < n; i++){
        int k;
        cin >> k;
        vector<int> w;
        for(int a{0}; a < k; a++){
            int k1;
            cin >> k1;
            w.push_back(k1);
        }
        v.push_back(w);
    }
  
    for(int b{0}; b < q; b++){
        int q1, q2;
        cin >> q1;
        cin >> q2;
        cout << v[q1][q2] <<endl;
    }
    
    return 0;
}