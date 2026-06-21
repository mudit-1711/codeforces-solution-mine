#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> h(n), a(n);

    for (int i = 0; i < n; i++) {
        cin >> h[i] >> a[i];
    }

    int ans = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && h[i] == a[j]) {
                ans++;
            }
        }
    }

    cout << ans << '\n';
    return 0;
}