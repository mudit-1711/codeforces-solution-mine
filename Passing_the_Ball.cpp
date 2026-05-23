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
    string s;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>s;
        vector<int>v(n+1,0);
        int pos=1;
        v[pos]=1;
        for(i=0;i<n;i++){
            if(s[pos-1]=='R')pos++;
            else pos--;
            v[pos]=1;
        }
        int ans=0;
for(i=1;i<=n;i++){
    ans+=v[i];
}
cout<<ans<<endl;
    }

    return 0;
}