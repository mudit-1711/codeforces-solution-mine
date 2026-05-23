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
    int n,l,d,i,j,k;
    cin>>n>>l;
    vector<int>arr(n);
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    double d1 = arr[0];
    double d2 = l-arr[n-1];
    double maxi=0;
    for(i=0;i<n-1;i++){
        maxi=max(maxi,double(arr[i+1]-arr[i]));
    }
   double d3 = maxi/2;
    double ans = max(max(d1,d2),d3);
    cout<<fixed<<setprecision(10)<<ans;
    return 0;
}