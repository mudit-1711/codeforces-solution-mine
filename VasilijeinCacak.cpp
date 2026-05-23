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
    long long i,j,t,k,n,x;
    cin>>t;
    while(t--){
        cin>>n>>k>>x;
         long long min_sum = k * (k + 1) / 2;
        long long max_sum = k * (2*n - k + 1) / 2;

        if(x >= min_sum && x <= max_sum){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}