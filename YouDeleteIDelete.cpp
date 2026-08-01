#include <iostream>
#include <string>
using namespace std;
void solve() {
    string s;
    cin >> s;
    string p = "";
    bool rem = false;
    for (char c : s) {
        if (c == '1' && !rem) {
            rem = true;
        } else {
            p += c;
        }
    }
    
    string ans = "";
    for (int i = 0; i < p.length(); i++) {
        if (p[i] == '0') {
            string temp = p.substr(0, i) + p.substr(i + 1);
            if (ans == "" || temp > ans) {
                ans = temp;
            }
        }
    }
    cout << ans << "\n";
}

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}