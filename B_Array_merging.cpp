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
        vector<int>a(n),b(n);
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=0;i<n;i++){
            cin>>b[i];
        }
        vector<int>sa(2*n+1,0),sb(2*n+1,0);
        int c =1;
        for(i=1;i<n;i++){
            if(a[i]==a[i-1]){
                c++;
            }else{
                sa[a[i-1]]=max(sa[a[i-1]],c);
                c=1;
            }
        }
        sa[a[n-1]]=max(sa[a[n-1]],c);
        c=1;
        for(i=1;i<n;i++){
            if(b[i]==b[i-1]){
                c++;
            }else{
                sb[b[i-1]]=max(sb[b[i-1]],c);
                c=1;
            }
        }
        sb[b[n-1]]=max(sb[b[n-1]],c);
        int ans =0;
        for(i=1;i<2*n+1;i++){
            ans=max(ans,sa[i]+sb[i]);
        }
        cout<<ans<<endl;
    }

    return 0;
}