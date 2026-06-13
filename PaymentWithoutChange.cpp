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
    int i,j,q,a,b,n,s;
    cin>>q;
    while(q--){
        cin>>a>>b>>n>>s;
        long long x = min(a, s / n);
        if(b>=s){
            cout<<"YES"<<endl;
        }else if(x*n<=s&&b>=(s-x*n)){
            cout<<"YES"<<endl;
        }else if(x*n==s){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }// 1 2 5 6 10
    }

    return 0;
}