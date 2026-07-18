#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int one = 0, neg = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x == 1) one++;
            else neg++;
        }

        if (abs(one - neg) % 4 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}