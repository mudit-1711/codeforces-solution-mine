#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    set<int> uni;
    bool has = false;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        
        if (uni.count(a[i])) {
            has= true;
        }
        uni.insert(a[i]);
    }

    if (has) {
        cout << -1 << "\n";
        return;
    }

    
    sort(a.rbegin(), a.rend());
    
    
    for (int i = 0; i < n; ++i) {
        cout << a[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
}

int main() {
    
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}