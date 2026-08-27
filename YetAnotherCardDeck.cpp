#include <bits/stdc++.h>
using namespace std;
int main() {
    int i, j, n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (i = 0; i < n; i++)
        cin >> a[i];

    vector<int> t(q);
    for (i = 0; i < q; i++)
        cin >> t[i];
        
    vector<int> pos(51, -1);
    for (i = 0; i < n; i++) {
        if (pos[a[i]] == -1)
            pos[a[i]] = i + 1;
    }

    for (auto x : t) {
        int p = pos[x];
        cout << p << " ";
        for (i = 1; i <= 50; i++) {
            if (pos[i] < p)
                pos[i]++;
        }
        pos[x] = 1;
    }

    return 0;
}