#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<long long> a(n), b(n);

        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for(int i = 0; i < n; i++) {
            cin >> b[i];
        }

        long long mx = 0;
        long long sum = 0;

        for(int i = 0; i < n; i++) {
            sum += max(a[i], b[i]);
            mx = max(mx, min(a[i], b[i]));
        }

        cout << sum + mx << endl;
    }

    return 0;
}