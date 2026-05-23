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
    int i,j,t,n,x,k;
    cin>>t;
    while(t--){
        cin>>n>>x;
        vector<int>a(n);
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        int ans = INT_MIN;
        vector<int>ne;
        ne.push_back(0);
        for(i=0;i<n;i++){
            ne.push_back(a[i]);
        }
        ne.push_back(x);
        for(i=n-1;i>=0;i--){
            ne.push_back(a[i]);
        }
        ne.push_back(0);
        for(i=0;i<ne.size()-1;i++){
           
            if(ne[i] == x || ne[i + 1] == x) {
                ans = max(ans, 2 * abs(ne[i] - ne[i + 1]));
            }
            else {
                ans = max(ans, abs(ne[i] - ne[i + 1]));
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}