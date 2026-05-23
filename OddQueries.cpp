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
    long long i,j,t,n,q,l,r,k;
    cin>>t;
    while(t--){
        cin>>n>>q;
        long long sum =0;
        vector<long long>a(n);
        
        for(i=0;i<n;i++){
            cin>>a[i];
         sum+=a[i];
        }
        vector<long long> pref(n);
        for(i=0;i<n;i++){
            if(i==0) pref[i]=a[i];
            else pref[i]=pref[i-1]+a[i];
        }
        while(q--){
            cin>>l>>r>>k;
            l--;r--;
            long long old = pref[r]-(l>0?pref[l-1]:0);
            long long newi = k*(r-l+1);
            long long temp = sum - old+newi;
            if(temp%2==1){
                cout<<"YES"<<endl;
            }
            else{
                 cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}