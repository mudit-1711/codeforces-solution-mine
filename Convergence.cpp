#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int ans = n;

        for (int i = 0; i < n; i++) {
            int smaller = 0;
            int greater = 0;

            for (int j = 0; j < n; j++) {
                if (a[j] < a[i]) {
                    smaller++;
                }
                else if (a[j] > a[i]) {
                    greater++;
                }
            }

            ans = min(ans, max(smaller, greater));
        }

        cout << ans << "\n";
    }

    return 0;
}