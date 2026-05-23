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
    int i,j,n,m;
    cin>>n>>m;
    vector<int>vt(m);
    for(i=0;i<m;i++){
        cin>>vt[i];
    }
    int ans = INT16_MAX;
    sort(vt.begin(),vt.end());
    for(i=0;i<m;i++){
        if(i+n-1<m){
            ans=min(ans,vt[i+n-1]-vt[i]);
        }
    }
cout<<ans;
    return 0;
}