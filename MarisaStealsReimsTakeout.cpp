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
    int i,j,t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int c0=0,c1=0,c2=0;
        int p;
        vector<int>w(n);
        for(i=0;i<n;i++){
            cin>>w[i];
            if(w[i]==0)c0++;
            if(w[i]==1)c1++;
            if(w[i]==2)c2++;
        }
        p = min(c1,c2);
            c1-=p;
            c2-=p;
         int ans = c0 + p + c1/3 + c2/3;
         cout<<ans<<endl;

    }

    return 0;
}