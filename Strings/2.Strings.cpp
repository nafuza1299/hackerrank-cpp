#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string s, s1;
    cin >> s >> s1;
    
    cout << s.size() << " " << s1.size() << endl;
    cout << s+s1 << endl;
    
    swap(s[0], s1[0]);
    cout << s << " " << s1 << endl;
    return 0;
}
