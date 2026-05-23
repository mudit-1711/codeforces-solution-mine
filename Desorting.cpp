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
        cin>>n;
        int d=INT_MAX;
        vector<int>a(n);
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        if(!is_sorted(a.begin(),a.end())){
            cout<<0<<endl;
            continue;
        }
        for(i=0;i<n-1;i++){
            d = min(a[i+1]-a[i],d);
        }
        cout<<(d/2)+1<<endl;
    }

    return 0;
}