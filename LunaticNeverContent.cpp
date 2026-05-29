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
    int i,j,n,t,k;
    cin>>t;
    while(t--){
        cin>>n;// 1 2 3 4 
        vector<int>a(n);
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        int x=0;
        for(i=0;i<n;i++){
         x=__gcd(x,abs(a[i]-a[n-i-1]));
        }
        cout<<x<<endl;
    }

    return 0;
}