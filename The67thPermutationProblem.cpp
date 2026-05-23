#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int s = 1;
    int l = n + 1;
    
    for (int i = 0; i < n; ++i) {
        cout << s++ << " " << l<< " " << l + 1;
        l += 2;
        if (i < n - 1) {
            cout << " ";
        }
    }
    cout << "\n";
}

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}