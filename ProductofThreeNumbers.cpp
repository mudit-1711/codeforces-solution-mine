#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <vector>
#include <array>
#include <deque>
#include <list>
#include <forward_list>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <numeric>
#include <utility>
#include <functional>
#include <string>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <climits>
#include <cfloat>
#include <bitset>
using namespace std;
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        bool ok = false;
        long long a, b, c;
        for (a = 2; a * a * a <= n; a++) {
            if (n % a == 0) {
                long long n2 = n / a;
                for (b = a + 1; b * b <= n2; b++) {
                    if (n2 % b == 0) {
                        c = n2 / b;
                        if (c != a && c != b) {
                            ok = true;
                            break;
                        }
                    }
                }
                if (ok) break;
            }
        }
        if (ok) {
            cout << "YES\n";
            cout << a << " " << b << " " << c << "\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}