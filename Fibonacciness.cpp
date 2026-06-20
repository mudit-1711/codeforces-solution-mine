#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;

        map<int, int> mp;
        mp[a1 + a2]++;
        mp[a4 - a2]++;
        mp[a5 - a4]++;

        int ans = 0;
        for (auto i : mp) ans = max(ans, i.second);

        cout << ans << '\n';
    }
}