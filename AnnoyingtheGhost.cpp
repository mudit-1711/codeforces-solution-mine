#include <bits/stdc++.h>
using namespace std;

int main() {
     int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        vector<int> p(n);
        set<int> s;
        for (int i = 1; i <= n; i++) s.insert(i);

        bool ok = 1;

        for (int i = 0; i < n; i++) {
            int c = lower_bound(b.begin(), b.end(), a[i]) - b.begin() + 1;

            if (c == n + 1) {
                ok = 0;
                break;
            }

            auto it = s.lower_bound(c);

            if (it == s.end()) {
                ok = 0;
                break;
            }

            p[i] = *it;
            s.erase(it);
        }

        if (!ok) {
            cout << -1 << '\n';
            continue;
        }

        long long ans = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (p[i] > p[j]) ans++;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}