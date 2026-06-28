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
    int i,j,n,c,k,t;
    cin>>t;

    while(t--){
        cin>>n>>c;

        vector<int>a(n),b(n);
        vector<int>x,y;

        for(i=0;i<n;i++) cin>>a[i];
        for(i=0;i<n;i++) cin>>b[i];

        x=a;
        y=b;

        int ans1=INT_MAX,ans2=INT_MAX;
        bool ok=true;
        int cost=0;
        for(i=0;i<n;i++){
            if(a[i]<b[i]){
                ok=false;
                break;
            }
            cost+=a[i]-b[i];
        }
        if(ok) ans1=cost;
        sort(x.begin(),x.end());
        sort(y.begin(),y.end());

        ok=true;
        cost=c;

        for(i=0;i<n;i++){
            if(x[i]<y[i]){
                ok=false;
                break;
            }
            cost+=x[i]-y[i];
        }

        if(ok) ans2=cost;

        if(ans1==INT_MAX && ans2==INT_MAX)
            cout<<-1<<"\n";
        else
            cout<<min(ans1,ans2)<<"\n";
    }

    return 0;
}