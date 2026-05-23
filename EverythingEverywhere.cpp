#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;
long long gcd(long long a, long long b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}
void solve() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++) cin >> p[i];

    long long count = 0;
    for (int i = 0; i < n; i++) {
        int mn = p[i], mx = p[i], g = p[i];
        for (int j = i + 1; j < n; j++) {
            mn = min(mn, p[j]);
            mx = max(mx, p[j]);
            g = gcd(g, p[j]);
            if (mx - mn == g) {
                count++;
            }
            if (mx - mn > g && g == 1) break; 
        }
    }
    cout << count  << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}