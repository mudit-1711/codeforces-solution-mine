#include <iostream>

using namespace std;

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            long long m;
            cin >> n >> m;
            long long prev = -1;
            int maxlen = 0;
            int curlen = 0;
            for (int i = 0; i < n; ++i) {
                long long a;
                cin >> a;
                if (a == prev) {
                    curlen++;
                } else {
                    curlen = 1;
                    prev = a;
                }
                if (curlen > maxlen) {
                    maxlen = curlen;
                }
            }
            if (maxlen >= m) {
                cout << "NO\n";
            } else {
                cout << "YES\n";
            }
        }
    }
    return 0;
}