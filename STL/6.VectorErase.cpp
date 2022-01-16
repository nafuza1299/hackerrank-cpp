#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    vector<int> v;
    cin >> N;
    
    for(int i{0}; i < N; i++){
        int vi;
        cin >> vi;
        v.push_back(vi);
    }
    
    int x;
    cin >> x;
    v.erase(v.begin()+x-1);
    
    
    int a, b;
    cin >> a >> b;
    v.erase(v.begin()+a-1,v.begin()+b-1);
    
    cout << v.size() << endl;
    
    for(auto &x : v){
        cout << x << " ";
    }

    return 0;
}
