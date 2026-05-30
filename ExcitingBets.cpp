#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;

        if (a == b) {
            cout << "0 0\n";
            continue;
        }

        long long d = abs(a - b);
        long long r = a % d;

        cout << d << " " << min(r, d - r) << "\n";
    }

    return 0;
}