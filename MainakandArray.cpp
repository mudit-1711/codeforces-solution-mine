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
    int i,j,k,n,t;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int>a(n);
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        int ans =a[n-1]-a[0];
        for(i=1;i<n;i++){
            ans = max(ans,a[i]-a[0]);
        }
        for(i=0;i<n-1;i++){
            ans = max(ans,a[n-1]-a[i]);
        }
        for(i=0;i<n-1;i++){
            ans = max(ans,a[i]-a[i+1]);
        }
        cout<<ans<<endl;
    }

    return 0;
}