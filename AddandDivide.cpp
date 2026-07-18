#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;

        long long ans = INT_MAX;

        for (int i = 0; i <= 30; i++) {
            long long temp = a;
            long long nb = b + i;
            long long cur = i;

            if (nb == 1) continue;

            while (temp > 0) {
                temp /= nb;
                cur++;
            }

            ans = min(ans, cur);
        }

        cout << ans << endl;
    }

    return 0;
}