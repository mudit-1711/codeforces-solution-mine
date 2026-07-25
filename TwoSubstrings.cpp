#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    bool ab = false, ba = false;
    for (int i = 0; i < s.size() - 1; i++) {
        string temp = s.substr(i, 2);
        if (temp == "AB" && !ab) {
            ab = true;
            i++;
        } else if (temp == "BA" && ab) {
            ba = true;
            break;
        }
    }
    if (ab && ba) {
        cout << "YES";
        return 0;
    }
    ab = false;
    ba = false;
    for (int i = 0; i < s.size() - 1; i++) {
        string temp = s.substr(i, 2);
        if (temp == "BA" && !ba) {
            ba = true;
            i++;
        } else if (temp == "AB" && ba) {
            ab = true;
            break;
        }
    }
    if (ab && ba)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}