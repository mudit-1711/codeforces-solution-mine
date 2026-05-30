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
    int i, j, n, x, s, t, k;
    cin >> t;
    while (t--) {
        cin >> n >> x >> s;
        string u;
        cin >> u;
        int ans = 0;
        int empty = x;
        int partial = 0;
        for (i = 0; i < n; i++) {
            if (u[i] == 'I') {
                if (empty > 0) {
                    ans++;
                    empty--;
                    if (s > 1)
                        partial++;
                }
            }
            else if (u[i] == 'E') {
                if (partial > 0) {
                    ans++;
                    if (s == 2)
                        partial--;
                }
            }
            else {
                if (partial > 0) {
                    ans++;
                    if (s == 2)
                        partial--;
                }
                else if (empty > 0) {
                    ans++;
                    empty--;
                    if (s > 1)
                        partial++;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}