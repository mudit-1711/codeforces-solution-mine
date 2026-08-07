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
#include <climits>
using namespace std;
int main() {
    int i, j, t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int x = n + 1;
        bool prime = true;
        if (x < 2) prime = false;
        else {
            for (i = 2; i * i <= x; i++) {
                if (x % i == 0) {
                    prime = false;
                    break;
                }
            }
        }
        if (prime)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}