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
    long long i,j,n,t,sum,curr,mx;
    cin>>t;
    while(t--){
        cin>>n;
        vector<long long>a(n);
        sum=0;
        for(i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        curr=0,mx=LLONG_MIN;
        for(i=0;i<n-1;i++){
            curr=max(curr+a[i],a[i]);
            mx=max(mx,curr);
        }
        curr=0;
        for(i=1;i<n;i++){
            curr=max(curr+a[i],a[i]);
            mx=max(mx,curr);
        }
        if(sum>mx){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}