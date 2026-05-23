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
#define int long long
signed main() {
    int i,j,t,x,y,a,b;
    cin>>t;
    while(t--){
        cin>>x>>y;
        cin>>a>>b;
        int cost=0;
        if(x<y){
            cost = a*(y-x);
            y=x;
        }else{
            cost = a*(x-y);
            x=y;
        }
        cost+=min(b,2*a)*x;
        cout<<cost<<endl;
    }

    return 0;
}