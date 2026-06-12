#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    long long a, b, x;
    cin >> a >> b >> x;
    vector<long long> aa = {a}, bb = {b};
    while (a > 0) aa.push_back(a /= x);
    while (b > 0) bb.push_back(b /= x);
    
    long long ans = -1;
    for (int i = 0; i < aa.size(); ++i) {
        for (int j = 0; j < bb.size(); ++j) {
            long long m = max(aa[i], bb[j]);
            long long cost = i + j + 2 * m - aa[i] - bb[j];
            if (ans == -1 || cost < ans) {
                ans = cost;
            }
        }
    }
    cout << ans << "\n";
}
int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}