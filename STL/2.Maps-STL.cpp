#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int Q;
    cin >> Q;
    map<string,int> m;
    
    for(int i{0}; i < Q; i++){
        string X;
        int type,Y;
        cin >> type >> X;
        
        map<string,int>::iterator itr=m.find(X);
        switch(type){
            case 1:
                cin >> Y;
                if(itr == m.end()){
                    m.insert(make_pair(X, Y));
                }
                else{
                    m[X] += Y;
                }
                break;
            case 2:
                if(itr != m.end()){
                    m.erase(X); 
                }
                break;
            case 3:
                if(itr != m.end()){
                    cout << m[X] << endl;
                }
                else{
                    cout << 0 << endl;
                }
                break;
        }
    }  
    return 0;
}



