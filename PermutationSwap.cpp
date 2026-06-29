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
    int i,j,n,t;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int>p(n);
        for(i=0;i<n;i++)cin>>p[i];
        int ans = abs(p[0]-1);
        for(i=1;i<n;i++){
            ans=__gcd(ans,abs(p[i]-(i+1)));
        }
        cout<<ans<<endl;
    }

    return 0;
}