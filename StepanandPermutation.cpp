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
    int i,j,n,t,x,y;
    cin>>t;
    while(t--){
        cin>>n>>x>>y;
        vector<int>p(n);
        for(i=0;i<n;i++){
            cin>>p[i];
        }
        bool ok =true;
        int g = __gcd(x,y);
        for(i=0;i<n;i++){
            if(p[i]%g!=(i+1)%g){
                ok=false;
            }
        }
        if(ok){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}