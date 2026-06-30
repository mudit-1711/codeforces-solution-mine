#include <iostream>
#include <vector>
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<long long> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    vector<long long> c(n + 1, 0);
    for (int i = 0; i < n; i++) {
        c[i] = b[i] - a[i];
    }
    vector<long long> x(n + 2, 0);
    x[1] = c[0];
    for (int i = 2; i <= n + 1; i++) {
        x[i] = c[i - 1] + c[i - 2];
    }
    long long odd = 0, even = 0;
    bool ok = true;

    for (int i = 1; i <= n + 1; i++) {
        if (i % 2 == 1) {
            odd += x[i];
            if (odd < 0) {
                ok = false;
                break;
            }
        } else {
            even += x[i];
            if (even < 0) {
                ok = false;
                break;
            }
        }
    }

    if (odd != even) {
        ok = false;
    }

    if (ok) {
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