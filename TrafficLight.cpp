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
    cin>>t;
    while(t--){
        string s;
        char c;
        cin>>n>>c;
        cin>>s;
        int ans = INT_MIN;
        if (c == 'g') {
            cout << 0 << endl;
            continue;
        }
        s=s+s;
        //rggryrggry
        int g=-1;
        n=2*n;
        for(i=n-1;i>=0;i--){
            if(s[i]=='g'){
                g=i;
            }
            if(s[i]==c){
                ans=max(ans,(g-i));
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}