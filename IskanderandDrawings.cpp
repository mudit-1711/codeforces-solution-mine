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
    int i,j,t,n;
    cin>>t;
    while(t--){
        cin>>n;
        string s;
        cin>>s;
        int mx = 0, cnt = 0;
        for (char c : s) {
            if (c == '#') {
                cnt++;
                mx = max(mx, cnt);
            } else {
                cnt = 0;
            }
        }
        cout << (mx + 1) / 2 << "\n";
    }

    return 0;
}