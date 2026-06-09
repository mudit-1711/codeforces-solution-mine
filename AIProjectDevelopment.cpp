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
    int i,j,n,x,y,z,t;
    cin>>t;
    while(t--){
        cin>>n>>x>>y>>z;
        int ans1 =0;
        int code1 =0;
        while(code1<n){
            
                ans1++;
                code1+=(x+y);
            
        }   
        int ans2=0,code2=0;
        while(ans2<z&&code2<n){
            code2+=x;
            ans2++;
        }
        while(code2<n){
            code2+=((x+10*y));
            ans2++;
        }
        cout<<min(ans1,ans2)<<endl;
    }

    return 0;
}