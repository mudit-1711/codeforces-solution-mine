#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int xk, yk, xq, yq;
        cin >> xk >> yk;
        cin >> xq >> yq;
        set<pair<int, int>> s1, s2;
        s1.insert({xk + a, yk + b});
        s1.insert({xk + a, yk - b});
        s1.insert({xk - a, yk + b});
        s1.insert({xk - a, yk - b});
        s1.insert({xk + b, yk + a});
        s1.insert({xk + b, yk - a});
        s1.insert({xk - b, yk + a});
        s1.insert({xk - b, yk - a});

        s2.insert({xq + a, yq + b});
        s2.insert({xq + a, yq - b});
        s2.insert({xq - a, yq + b});
        s2.insert({xq - a, yq - b});
        s2.insert({xq + b, yq + a});
        s2.insert({xq + b, yq - a});
        s2.insert({xq - b, yq + a});
        s2.insert({xq - b, yq - a});

        int ans = 0;

        for (auto x : s1) {
            if (s2.count(x))
                ans++;
        }

        cout << ans << "\n";
    }

    return 0;
}