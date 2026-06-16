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
    int i,j,k,n,t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        if (n >= k && (n % 2 == k % 2)) {
            cout << "YES\n";
            for (int i = 1; i < k; i++)
                cout << 1 << " ";
            cout << n - (k - 1) << "\n";
        }
        else if (n % 2 == 0 && n >= 2 * k) {
            cout << "YES\n";
            for (int i = 1; i < k; i++)
                cout << 2 << " ";
            cout << n - 2 * (k - 1) << "\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}