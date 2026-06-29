#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        int cnt = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] != 0) {
                cnt++;
                while (i + 1 < n && a[i + 1] != 0)
                    i++;
            }
        }

        cout << min(cnt, 2) << '\n';
    }

    return 0;
}