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
    cin>>t;
    while(t--){
        long long n, k, m;
    cin >> n >> k >> m;
    
    if (k > m) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
        for (int i = 1; i <= n; ++i) {
            if (i % k == 0) {
                cout << m - k + 1 <<" ";
            } else {
                cout << 1 << " ";
            }
        }
        cout << "\n";
    }
    }

    return 0;
}