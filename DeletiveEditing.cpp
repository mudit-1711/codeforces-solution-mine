#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int tc;
    cin >> tc;

    while (tc--) {
        string s, t;
        cin >> s >> t;

        vector<int> freq(26, 0);
        for (char c : t)
            freq[c - 'A']++;

        int i = s.size() - 1;
        int j = t.size() - 1;

        bool ok = true;

        while (i >= 0) {
            if (j >= 0 && s[i] == t[j]) {
                freq[t[j] - 'A']--;
                i--;
                j--;
            } else {
                if (freq[s[i] - 'A'] > 0) {
                    ok = false;
                    break;
                }
                i--;
            }
        }

        if (ok && j == -1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}