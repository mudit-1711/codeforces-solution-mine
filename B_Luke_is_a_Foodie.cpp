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
    int i,j,t,n,x;
    cin>>t;
    while(t--){
        cin>>n>>x;
        vector<int>a(n);
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        int ans =0;
        //a[i]-x<=v<=a[i]+x;
        vector<pair<int,int>>v;
        for(i=0;i<n;i++){
            v.push_back({a[i]-x,a[i]+x});
        }
        int l=v[0].first;
        int r = v[0].second;
        for(i=1;i<n;i++){
            l=max(l,v[i].first);
            r=min(r,v[i].second);
            if(l>r){
                ans++;
                l=v[i].first;
                r = v[i].second;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}