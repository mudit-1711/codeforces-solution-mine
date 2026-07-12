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
    int i,j,k,t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int even = 2, odd = 1;
        vector<int> p(n + 1);

        for (i = 1; i <= n; i++) {
            if (i % 2 == 1) {
                p[i] = even;
                even += 2;
            } else {
                p[i] = odd;
                odd += 2;
            }
        }

        for (i = 1; i <= n; i++)
            cout << p[i] << " ";
        cout << "\n";
    }

    return 0;
}