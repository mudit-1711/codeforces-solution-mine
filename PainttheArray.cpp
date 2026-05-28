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
#define int long long
int32_t main() {
    int i,j,k,t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int>a(n);
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        int ge =0,go=0;
        for(i=0;i<n;i+=2){
            ge=__gcd(a[i],ge);
        }
        for(i=1;i<n;i+=2){
            go=__gcd(a[i],go);
        }
        bool odd = true;
         for(i=1;i<n;i+=2){
            if(a[i]%ge==0){
                odd = false;
            }
         }
         if(odd){
            cout<<ge<<endl;
            continue;
         }
         bool even = true;
         for(i=0;i<n;i+=2){
            if(a[i]%go==0){
                even = false;
            }
         }
         if(even){
            cout<<go<<endl;
         }else{
            cout<<0<<endl;
         }
    }

    return 0;
}