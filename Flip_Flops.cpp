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
    long long i,j,k,n,c,t;
    cin>>t;
    while(t--){
        cin>>n>>c>>k;
        vector<long long>arr(n);
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
    sort(arr.begin(),arr.end());
    for(i=0;i<n;i++){
       if(arr[i]>c)break;
       long long use = min(k,c-arr[i]);
       arr[i]+=use;
       k-=use;
       c+=arr[i];
    }
    cout<<c<<endl;
    }

    return 0;
}