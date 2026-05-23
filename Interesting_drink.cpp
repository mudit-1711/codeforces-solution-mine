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
    long long  i,j,n,q,k;
    cin>>n;
    vector<long long>x(n);
    for(i=0;i<n;i++){
        cin>>x[i];
    }
    sort(x.begin(),x.end());
    cin>>q;
    while(q--){
        long long m;
        cin>>m;
        long long  ans=0,l=0,r=n-1;
        while(l<=r){

            long long mid=(l+r)/2;
            if(x[mid]<=m){
                ans=mid+1;
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}