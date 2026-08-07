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
            int n, m, x, y;
            cin >> n >> m >> x >> y;
            vector<int> a(x), b(y);
            for (int i = 0; i < x; ++i) cin >> a[i];
            for (int i = 0; i < y; ++i) cin >> b[i];
            vector<pair<int, int>> ele;
            int i = 0, j = 0;
            while (i < x && j < y) {
                if (a[i] < b[j]) {
                    ele.push_back({a[i], 1});
                    i++;
                } else if (a[i] > b[j]) {
                    ele.push_back({b[j], 2});
                    j++;
                } else {
                    ele.push_back({a[i], 3});
                    i++;
                    j++;
                }
            }
            while (i < x) {
                ele.push_back({a[i], 1});
                i++;
            }
            while (j < y) {
                ele.push_back({b[j], 2});
                j++;
            }
            sort(ele.rbegin(), ele.rend());
            long long ans = 0;
            int c1 = 0, c2 = 0, tot = 0;
            int l = n + m - 1;
            for (auto& p : ele) {
                if (tot >= l) break;
                if (p.second == 1) {
                    if (c1 < n) {
                        c1++;
                        tot++;
                        ans += p.first;
                    }
                } else if (p.second == 2) {
                    if (c2 < m) {
                        c2++;
                        tot++;
                        ans += p.first;
                    }
                } else {
                    tot++;
                    ans += p.first;
                }
            }
            cout << ans << "\n";
        }
    }
    return 0;
}