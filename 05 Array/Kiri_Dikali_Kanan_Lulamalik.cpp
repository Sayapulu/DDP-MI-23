#include <iostream>
using namespace std;

int main() {
    int b, c;
    cin >> b >> c;
    for (int i = 1; i <= b; i++ ) {
        for (int j = 1; j <= c; j++) {
           cout << i * j << " ";
     }
     cout << endl;
   }
    return 0;
}
 