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
    cin>>t;
    while(t--){
        cin>>n>>k;
        string s;
        cin>>s;
        int ans=0;
        for(i=0;i<n;i+=k){
            bool ok = true;
            for(j=i;j<i+k;j++){
                if(s[j]=='0'){
                    ok=false;
                    break;
                }
            }
            if(ok)ans++;
        }
        cout<<ans<<endl;
    }

    return 0;
}