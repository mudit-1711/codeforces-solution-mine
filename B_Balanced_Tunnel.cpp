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
    int i,j,n,t;
        cin>>n;
        vector<int>a(n),b(n),c(n,0);
        map<int,int>mpp;
        for(i=0;i<n;i++){
            cin>>a[i];
            mpp[a[i]]=i;
        }
        for(i=0;i<n;i++){
            cin>>b[i];
            c[mpp[b[i]]]=i;
        }
        int mx = c[0],ans=0;
        for(i=1;i<n;i++){
            if(c[i]<mx){
                ans++;
            }
            mx=max(mx,c[i]);
        }
    cout<<ans<<endl;

    return 0;
}