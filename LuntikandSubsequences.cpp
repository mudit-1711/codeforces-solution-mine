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
    long long i,j,k,t,n;
    cin>>t;
    while(t--){
        cin>>n;
        long long sum=0;
        long long zero =0;
        long long one =0;
        vector<long long>a(n);
        for(i=0;i<n;i++){
            cin>>a[i];
            a[i]+=sum;
            if(a[i]==0)zero++;
            if(a[i]==1)one++;
        }
        long long req = sum-1;
        if(one==0){
            cout<<0<<endl;
            continue;
        }
        long long ans = pow(2,zero)*one;
        cout<<ans<<endl;

    }

    return 0;
}