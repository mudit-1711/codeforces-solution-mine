#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<long long> v[2];
    for (int i = 0, a; i < n; ++i) {
        cin >> a;
        v[(i + 1) % 2].push_back(a);
    }
    int ops[2] = {0, 0};
    for (int i = 0, x; i < m; ++i) {
        cin >> x;
        ops[x % 2]++;
    }
    long long ans = 0;
    for (int p : {0, 1}) {
        sort(v[p].rbegin(), v[p].rend());
        for (int i = 0; i < v[p].size(); ++i) {
                       if (ops[p] > 0 && (i == 0 || (i < ops[p] && v[p][i] > 0))) {
                continue; 
            }
            ans += v[p][i];
        }
    }

    cout << ans << "\n";
}

int main() {
  int t;
    if (cin >> t) {
        while (t--) solve();
    }
    return 0;
}