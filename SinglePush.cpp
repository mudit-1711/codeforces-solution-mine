#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            cin >> b[i];

        vector<int> d(n);

        for (int i = 0; i < n; i++)
            d[i] = b[i] - a[i];

        bool ok = true;

        for (int i = 0; i < n; i++) {
            if (d[i] < 0)
                ok = false;
        }

        int i = 0;
        while (i < n && d[i] == 0)
            i++;

        if (i != n) {

            int k = d[i];

            while (i < n && d[i] == k)
                i++;
            
            while (i < n) {
                if (d[i] != 0)
                    ok = false;
                i++;
            }
        }

        if (ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}