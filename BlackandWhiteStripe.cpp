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
    int i,j,k,t,n;
    cin>>t;
    while(t--){
        cin>>n>>k;
        string s;
        cin>>s;
        int l =0,r=0;
        int white =0;
         for ( i = 0; i < k; i++) {
            if (s[i] == 'W') white++;
        }

        int ans = white;
        for ( i = k; i < n; i++) {
            if (s[i] == 'W') white++;
            if (s[i - k] == 'W') white--;

            ans = min(ans, white);
        }

        cout<<ans<<endl;
    }

    return 0;
}