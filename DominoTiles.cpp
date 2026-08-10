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
const int mod = 998244353;
int main()
{
    int i, j, t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        string s;
        cin >> s;
        string p[4];
        for (i = 0; i < n; ++i)
        {
            p[0] += (i % 4 == 0 || i % 4 == 1) ? '0' : '1';
            p[1] += (i % 4 == 1 || i % 4 == 2) ? '1' : '0';
            p[2] += (i % 4 == 0 || i % 4 == 3) ? '1' : '0';
            p[3] += (i % 4 == 0 || i % 4 == 1) ? '1' : '0';
        }
        int ans = 0;
        for (j = 0; j < 4; j++)
        {
            bool yes = true;
            for (i = 0; i < n; i++)
            {
                if (s[i] != '?' && s[i] != p[j][i])
                {
                    yes = false;
                    break;
                }
            }
            if (yes)
            {
                ans++;
            }
        }
        cout << ans%mod << endl;
    }

    return 0;
}