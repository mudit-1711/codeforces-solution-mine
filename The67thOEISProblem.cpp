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
    int limit = 200000;
    vector<bool> is_prime(limit + 1, true);
    vector<long long> primes;
    
    for (int p = 2; p <= limit; p++) {
        if (is_prime[p]) {
            primes.push_back(p);
            for (int i = p * 2; i <= limit; i += p) {
                is_prime[i] = false;
            }
        }
    }
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            for (int i = 0; i < n; i++) {
                cout << primes[i] * primes[i + 1] << (i == n - 1 ? "" : " ");
            }
            cout << "\n";
        }
    }

    return 0;
}