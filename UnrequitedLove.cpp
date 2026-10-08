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
int main()
{
    long long i, j, t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<long long> a(n);
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        map<long long, long long> mpp;
        long long ans = 0;

        for (i = 0; i < n - 4; i++)
        {
            long long x = a[i] + a[i + 2] - a[i + 4];
            long long y = mpp[x];
            if (i >= 2 && a[i - 2] + a[i] - a[i + 2] == x)
            {
                y--;
            }
            if (i >= 4 && a[i - 4] + a[i - 2] - a[i] == x)
            {
                y--;
            }
            ans += y;
            mpp[x]++;
        }

        cout << ans << endl;
    }

    return 0;
}