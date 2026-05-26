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
    int i,j,k,t,n,x;
    cin>>t;
    while(t--){
        cin>>n>>x;
        int e=0,o=0;
        vector<int>a(n);
        for(i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0)e++;
            else o++;
        }
         bool ok = false;
        for(int odd = 1; odd <= min(o, x); odd += 2) {

            int evenNeeded = x - odd;

            if(evenNeeded <= e) {
                ok = true;
                break;
            }
        }
        if(ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}