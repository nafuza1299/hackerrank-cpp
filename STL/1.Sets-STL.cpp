#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int Q;
    cin >> Q;
    set<int> s;  
    
    for(int i{0}; i < Q; i++){
        int x, y;
        cin >> y >> x;
        switch(y){
            case 1:
                s.insert(x);
                break;
            case 2:
                s.erase(x);
                break;
            case 3:
                set<int>::iterator itr = s.find(x);
                if(itr != s.end()){
                    cout << "Yes" << endl;
                }
                else{
                    cout << "No" << endl;
                }
                break;
        }
    }
    return 0;
}



