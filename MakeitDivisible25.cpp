#include <bits/stdc++.h>
using namespace std;

int check(string s, char a, char b) {
    int n = s.size();
    int ans = 0;
    int idx = n - 1;

    while (idx >= 0 && s[idx] != b) {
        idx--;
        ans++;
    }

    if (idx < 0) return INT_MAX;

    idx--;

    while (idx >= 0 && s[idx] != a) {
        idx--;
        ans++;
    }

    if (idx < 0) return INT_MAX;

    return ans;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int ans = INT_MAX;

        ans = min(ans, check(s, '0', '0'));
        ans = min(ans, check(s, '2', '5'));
        ans = min(ans, check(s, '5', '0'));
        ans = min(ans, check(s, '7', '5'));

        cout << ans << "\n";
    }

    return 0;
}