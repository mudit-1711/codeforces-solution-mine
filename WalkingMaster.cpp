#include <iostream>
using namespace std;

int main() {
    long long t,a,b,c,d;
    cin >> t;

    while(t--) {

        cin >> a >> b >> c >> d;

        long long diag = d - b;
        long long left = a + diag - c;

        if(diag < 0 || left < 0) {
            cout << -1 << endl;
        }
        else {
            cout << diag + left << endl;
        }
    }

    return 0;
}