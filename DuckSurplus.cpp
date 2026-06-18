#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool check(long long mid, int n, const vector<long long>& a) {
    long long cur = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > mid) return false;
        if (cur > a[i]) {
            if (cur + a[i] <= mid) {
                cur += a[i];
            } else {
                return false;
            }
        } else {
            cur = a[i];
        }
    }
    return true;
}
void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    long long low = 0, high = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        low = max(low, a[i]);
        high += a[i];
    }
    
    long long ans = high;
    while (low <= high) {
        long long mid = low + (high - low) / 2;
        if (check(mid, n, a)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
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