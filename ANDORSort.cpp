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
        string s;
        cin>>s;
        i=0;
        while(i<n&&s[i]=='0')i++;
        if(i==0){
            int zero = 0;
            for(auto x : s){
                if(x=='0')zero++;
            }
            cout<<zero<<endl;
            continue;
        }
        vector<int>p(n+1,0);
        vector<int>su(n+2,0);
        for(j=0;j<n;j++){
            p[j+1]=p[j]+(s[j]=='1'?1:0);
        }
        for(j=n-1;j>=0;j--){
            su[j+1]=su[j+2]+(s[j]=='0'?1:0);
        }
        int ans = n;
        for(j=i;j<=n;j++){
            int op = p[j]+su[j+1];
            ans = min(op,ans);
        }
        cout<<ans<<endl;
    }

    return 0;
}