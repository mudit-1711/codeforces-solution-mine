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
    int i, j, n, t, m;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<vector<int>> v;
        for (i = 0; i < n; i++) {
            cin >> m;
            vector<int> a(m);
            for (j = 0; j < m; j++) {
                cin >> a[j];
            }
            sort(a.begin(), a.end());
            v.push_back(a);
        }
        long long ans = 0;
        vector<int> mx, mn;
        for (i = 0; i < n; i++) {
            mx.push_back(v[i][1]);
            mn.push_back(v[i][0]);
        }
        sort(mx.begin(), mx.end());
        sort(mn.begin(), mn.end());
        ans += mn[0];
        for (i = 1; i < n; i++) {
            ans += mx[i];
        }
        cout << ans << endl;
    }

    return 0;
}