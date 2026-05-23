#include <iostream>
using namespace std;
void solve() {
    int n;
    cin >> n;
    
    int maxi = 0;
    int op = 0;
    
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        if (a >= maxi) {
            maxi = a;
            op++;
        }
    }
    
    cout << op << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}