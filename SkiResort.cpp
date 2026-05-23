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
    long long i,j,t,n,k,q;
    cin>>t;
    while(t--){
        cin>>n>>k>>q;
        vector<long long>v(n,0);
        vector<long long> a(n);
        for(i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<=q){
                v[i]=1;
            }else{
                v[i]=0;
            }
        }
       long long cnt = 0;
    long long ans=0;
    for (long long x : v) {
        if (x == 1) {
            cnt++;
            if (cnt >= k) {
                ans += (cnt - k + 1);
            }
        } else {
            cnt = 0;
        }
    }
cout<<ans<<endl;
    }

    return 0;
}