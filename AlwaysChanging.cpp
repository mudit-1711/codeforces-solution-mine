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
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            string s;
            cin >> s;
            int c0 = 0, c1 = 0, b0 = 0, b1 = 0;
            for (int i = 0; i < n; ++i) {
                if (s[i] == '0') c0++;
                else c1++;
                if (i == 0 || s[i] != s[i - 1]) {
                    if (s[i] == '0') b0++;
                    else b1++;
                }
            }
            int d = c0 - c1;
            int ans = -1;
            for (int x = -1; x <= 1; ++x) {
                if (abs(d - x) <= 1) {
                    int m1 = min(b1, b0 - x);
                    if (m1 >= 0) {
                        int m0 = m1 + x;
                        if (m0 >= 0) {
                            ans = max(ans, m0 + m1);
                        }
                    }
                }
            }
            if (ans == -1) {
                cout << -1 << "\n";
            } else {
                cout << n - ans << "\n";
            }
        }
    }
    return 0;
}