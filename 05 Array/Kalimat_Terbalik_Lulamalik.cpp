#include <iostream>
using namespace std;

int main() {
    string b;
    cout <<"";
    getline(cin, b);
    for (int i = b.length()-1;i >= 0;i--) {
        cout << b[i];
        
    }
    cout << endl;
    return 0;
}
