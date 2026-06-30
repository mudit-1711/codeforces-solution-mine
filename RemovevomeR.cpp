#include <iostream>
#include <string>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    int blocks = 1;
    for (int i = 1; i < n; ++i) {
        if (s[i] != s[i - 1]) {
            blocks++;
        }
    }
    
    int mi;
    if (blocks == 2) {
        mi = 2;
    } else {
        mi = 1;
    }
    
    cout << mi << "\n";
}

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}