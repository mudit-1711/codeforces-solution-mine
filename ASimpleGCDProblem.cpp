#include <bits/stdc++.h>
using namespace std;

long long lcm_val(long long x, long long y) {
    return (x / __gcd(x, y)) * y;
}

void solve() {
    int n;
    cin >> n;

    vector<long long> a(n), b(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) cin >> b[i];

    vector<long long> g(n - 1);
    for (int i = 0; i < n - 1; ++i) {
        g[i] = __gcd(a[i], a[i + 1]);
    }

    int ans = 0;

    if (n >= 2) {
        if (g[0] != b[0]) ans++;
        if (g[n - 2] != b[n - 1]) ans++;

        for (int i = 1; i < n - 1; ++i) {
            if (lcm_val(g[i - 1], g[i]) != b[i]) {
                ans++;
            }
        }
    }

    cout << ans << "\n";
}

int main() {
    

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}