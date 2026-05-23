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
    long long i,j,t,n,k,x1,x2;
    cin>>t;
    while(t--){
        cin >> n >> x1 >> x2 >> k;
        if(n<=3){
            cout<<1<<endl;
        }else{
        long long d = abs(x1 - x2);
        d = min(d, n - d);
        cout << d + k << '\n';
        }
    }

    return 0;
}