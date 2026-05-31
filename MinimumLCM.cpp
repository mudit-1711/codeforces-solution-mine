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
        if(n%2==0){
            cout<<n/2<<" "<<n/2<<endl;
        }else{
            long long d = -1;

    for ( i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            d = i;
            break;
        }
    }
    if (d == -1)
        cout << 1 << " " << n-1 << '\n';
    else
        cout << n/d << " " << n - n/d << '\n';
        }
    }

    return 0;
}