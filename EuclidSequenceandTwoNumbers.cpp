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
        cin>>n;
        vector<int>a(n);
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        if(n==2){
            cout<<(max(a[0],a[1]))<<" "<<(min(a[0],a[1]))<<endl;
            continue;
        }
        sort(a.rbegin(),a.rend());
        bool ok =true;
        for(i=0;i<n-2;i++){
            if(!(a[i]>a[i+1]&&a[i+1]>a[i+2])){
                ok = false;
                break;
            }
            if (a[i] % a[i + 1] != a[i + 2]) {
                ok = false;
                break;
            }
        }
        if (!ok)
            cout << -1 << '\n';
        else
            cout << a[0] << " " << a[1] << '\n';
    }

    return 0;
}