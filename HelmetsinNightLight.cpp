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
    long long i,j,n,p,k,m,t;
    cin>>t;
    while(t--){
        cin>>n>>p;
        vector<long long>a(n),b(n);
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=0;i<n;i++){
            cin>>b[i];
        }
        vector<pair<long long,long long>> v;
        for(long long i = 0; i < n; i++) {
            v.push_back({b[i], a[i]});
        }
        sort(v.begin(), v.end());
        long long ans = p;
        long long cnt = 1;
        for(long long i = 0; i < n; i++) {
            long long temp = v[i].second;
            while(temp > 0 && cnt < n) {
                if(v[i].first >= p) {
                    ans += p;
                }
                else {
                    ans += v[i].first;
                }
                temp--;
                cnt++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}