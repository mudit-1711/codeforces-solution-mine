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
    int i,j,n,k;
    cin>>n>>k;
    vector<int>h(n);
    for(i=0;i<n;i++){
        cin>>h[i];
    }
    vector<int>pref(n,0);
    pref[0]=h[0];
    for(i=1;i<n;i++){
        pref[i]=h[i]+pref[i-1];
    }
    int ans=-1;
    int mn=INT_MAX;
    for(i=0;i<=n-k;i++){
        int sum = pref[i+k-1]-pref[i-1];
        if(i==0){
            sum=pref[k-1];
        }
        if(sum<mn){
            ans=i+1;
            mn=sum;
        }
    }
    cout<<ans;
    return 0;
}