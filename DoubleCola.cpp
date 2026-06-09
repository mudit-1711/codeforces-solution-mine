#include <iostream>
#include <vector>
using namespace std;

int main() {

    long long n;
    cin >> n;

    vector<string> v = {
        "Sheldon",
        "Leonard",
        "Penny",
        "Rajesh",
        "Howard"
    };

    long long cnt = 1;

    while (n > 5 * cnt) {
        n -= 5 * cnt;
        cnt *= 2;
    }

    long long pos = (n - 1) / cnt;

    cout << v[pos];

    return 0;
}