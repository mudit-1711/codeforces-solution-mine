#include <iostream>

using namespace std;

int main() {
    int t;
    if (cin >> t) {
        long long mod = 1e9 + 7;
        while (t--) {
            long long n;
            cin >> n;
            
            long long ans = n % mod;
            ans = (ans * ((n + 1) % mod)) % mod;
            ans = (ans * ((4 * n - 1) % mod)) % mod;
            ans = (ans * 337) % mod;
            
            cout << ans << "\n";
        }
    }
    return 0;
}