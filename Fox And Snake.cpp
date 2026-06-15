#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            for (int j = 0; j < m; j++) cout << '#';
        }
        else {
            if ((i / 2) % 2 == 1) {
                for (int j = 1; j < m; j++) cout << '.';
                cout << '#';
            } else {
                cout << '#';
                for (int j = 1; j < m; j++) cout << '.';
            }
        }
        cout << '\n';
    }

    return 0;
}