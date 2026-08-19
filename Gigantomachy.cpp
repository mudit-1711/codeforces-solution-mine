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
    int i,j,t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        vector<int>a(n),b(m);
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=0;i<m;i++){
            cin>>b[i];
        }
        int ha = a[0]+n-1;
        int hb = b[0]+m-1;
        if(ha>=hb){
            cout<<1<<endl;
        }else{
            cout<<2<<endl;
        }
    }

    return 0;
}