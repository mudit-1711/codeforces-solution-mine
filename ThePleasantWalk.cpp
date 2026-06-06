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
    int i,j,n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int cur = 1;
    int ans = 1;

    for (int i = 1; i < n; i++) {
        if (a[i] != a[i - 1]) {
            cur++;
        }
        else {
            cur = 1;
        }
        ans = max(ans, cur);
    }

    cout << ans;

    return 0;
}