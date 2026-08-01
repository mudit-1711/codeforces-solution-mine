#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> b(m);
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    if (n < 2 * m) {
        cout << "NO\n";
        return;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    bool possible = true;
    for (int i = 0; i < m; i++) {
        if (a[i] >= b[i] || a[n - m + i] <= b[i]) {
            possible = false;
            break;
        }
    }
    if (possible) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
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