#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;

    while (t--) {
        long long n, x;
        cin >> n >> x;

        vector<long long> a(n);
        long long sum = 0, mn = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
            mn += (a[i] + x - 1) / x;
        }

        long long mx = (sum + x - 1) / x;

        cout << mx << " " << mn << "\n";
    }

    return 0;
}