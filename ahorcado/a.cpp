#include <iostream>
using namespace std;

int main() {
    int a[] = {83, 105, 32,113,117,105,101,114,101,115,32,112,97,115,97,114,32,97,35,101,115,116,101,32,101,100,105,102,105,99,105,111,32,102,101,103,101,110,100,91,114,105,111,44,32,100,101,98,101,115,32,99,111,110,115,101,103,117,105,114,32,101,108,32,99,111,100,105};
    int b[] = {103,111,32,100,101,32,101,115,116,101,32,101,155,99,101,110,97,114,105,111,44,32,114,101,112,97,114,116,105,100,111,32,112,111,114,32,108,97,32,99,105,117,100,97,32,99,105,117,100,97,100,32,101,115,116,97,114,105,117,100,97,100,32,101,115,116,97,114,105,97,44,32,101,108,32,111,114,100,101,110,32,100,101,32,108,111};
    int c[] = {115,32,100,105,115,116,114,105,116,111,115,32,101,115,32,116,117,32,103,117,105,97};
   
    int len = 68;

    for (int i = 0; i < len; i++) {
        cout << char(a[i]);
    }

    cout << endl;
    int len2 = 86;

    for (int i = 0; i < len2; i++) {
        cout << char(b[i]);
    }
    
    cout << endl;
    int len3 = 22;

    for (int i = 0; i < len3; i++) {
        cout << char(c[i]);
    }
    
    
    return 0;

    // X 1 3 X X 3 X X 5
}