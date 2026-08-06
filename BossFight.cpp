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
    int i, j, t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        map<int, int> freq;
        for (i = 0; i < n; i++) {
            freq[a[i]]++;
        }
        long long ans = 0;
        for (auto it = freq.begin(); it != freq.end(); it++) {
            int trigger = it->first;
            map<int, int> cnt = freq;
            cnt[trigger]--;
            while (true) {
                int total = 0;
                int mx = 0;
                for (auto x : cnt) {
                    total += x.second;
                    mx = max(mx, x.second);
                }
                if (mx <= total - mx + 1)
                    break;
                int rem = -1;
                for (auto x : cnt) {
                    if (x.second == mx) {
                        rem = x.first;
                        break;
                    }
                }
                cnt[rem]--;
            }
            long long dmg = trigger;
            for (auto x : cnt) {
                dmg += 1LL * x.first * x.second;
            }
            ans = max(ans, dmg);
        }
        cout << ans << endl;
    }

    return 0;
}