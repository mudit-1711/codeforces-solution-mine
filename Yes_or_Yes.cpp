#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        int countY = 0;
        for (char c : s) {
            if (c == 'Y') countY++;
        }

        if (countY <= 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
