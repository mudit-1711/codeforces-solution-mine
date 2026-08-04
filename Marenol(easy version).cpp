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
        string a, b;
        cin >> a;
        cin >> b;
        string odda = "";
        string oddb = "";
        string evena = "";
        string evenb = "";
        for (i = 0; i < n; i++) {
            if (i % 2 == 0) {
                evena += a[i];
                evenb += b[i];
            } else {
                odda += a[i];
                oddb += b[i];
            }
        }
        sort(odda.begin(), odda.end());
        sort(oddb.begin(), oddb.end());
        sort(evena.begin(), evena.end());
        sort(evenb.begin(), evenb.end());
        if (odda == oddb && evena == evenb) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}