#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int n, k;
            cin >> n >> k;
            vector<int> a(n);
            for (int i = 0; i < n; i++) {
                cin >> a[i];
            }
            int p;
            cin >> p;
            p--;
            int sl = 0;
            int sr = 0;
            for (int i = 0; i < p; i++) {
                if (a[i] != a[i + 1]) {
                    sl++;
                }
            }
            for (int i = p; i < n - 1; i++) {
                if (a[i] != a[i + 1]) {
                    sr++;
                }
            }
            int m = max(sl, sr);
            if (m % 2 != 0) {
                m++;
            }
            cout << m << "\n";
        }
    }
}