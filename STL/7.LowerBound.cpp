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
    
    int Q;
    cin >> Q;
    vector<int>::iterator low;
    for(int i{0}; i < Q; i++){
        int Y;
        cin >> Y;
        low = lower_bound (v.begin(), v.end(), Y);
        if(v[low - v.begin()] == Y){
            cout << "Yes " << (low- v.begin()+1) << endl;

        }
        else{
            cout << "No " << (low- v.begin()+1) << endl;
        }
    }
   
    return 0;
}
