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
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n), b(n);

        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];

        int x = 0, y = 0;

        for(int i = 0; i < n; i++) {
            if(a[i] % 2 != 0) x++;
            if(b[i] % 2 != 0) y++;
        }

        if (k % 2 == 0) {
            if (x >= y) cout << "YES\n";
            else cout << "NO\n";
        } else {
            if (x <= y) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}