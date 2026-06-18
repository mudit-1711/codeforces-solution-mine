#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long i, j, k, t, n;
    cin >> n;

    vector<long long> a(n);
    vector<long long> pos;
    vector<long long> neg;
    vector<long long> zero;

    for (i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > 0) pos.push_back(a[i]);
        else if (a[i] < 0) neg.push_back(a[i]);
        else zero.push_back(a[i]);
    }

    cout << 1 << " " << neg[0] << endl;

    if (pos.size() > 0) {
        cout << pos.size() << " ";
        for (i = 0; i < pos.size(); i++) {
            cout << pos[i] << " ";
        }
        cout << endl;

        cout << neg.size() - 1 + zero.size() << " ";
        for (i = 1; i < neg.size(); i++) {
            cout << neg[i] << " ";
        }
        for (i = 0; i < zero.size(); i++) {
            cout << zero[i] << " ";
        }
    } else {
        cout << 2 << " " << neg[1] << " " << neg[2] << endl;

        cout << neg.size() - 3 + zero.size() << " ";
        for (i = 3; i < neg.size(); i++) {
            cout << neg[i] << " ";
        }
        for (i = 0; i < zero.size(); i++) {
            cout << zero[i] << " ";
        }
    }

    return 0;
}