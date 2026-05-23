#include <iostream>
#include <vector>
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<int> S, E, T, N;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x % 6 == 0) {
            S.push_back(x);
        } else if (x % 2 == 0) {
            E.push_back(x);
        } else if (x % 3 == 0) {
            T.push_back(x);
        } else {
            N.push_back(x);
        }
    }
    for (int x : S) cout << x << " ";
    for (int x : E) cout << x << " ";
    for (int x : N) cout << x << " ";
    for (int x : T) cout << x << " ";
    
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