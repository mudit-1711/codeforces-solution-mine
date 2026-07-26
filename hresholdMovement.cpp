#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<long long> w(n);
    for (int i = 0; i < n; i++) {
        cin >> w[i];
    }
    if (n % 2 != 0) {
        cout << "NO\n";
        return;
    }
    long long minodd = 2e18;
    long long maxeven = -2e18;
    
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            minodd = min(minodd, w[i]);
        } else {
            maxeven = max(maxeven, w[i]);
        }
    }
    if (maxeven < minodd - 1) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}