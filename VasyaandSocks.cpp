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
    int i,j,n,m;
    cin>>n>>m;
    if(m>n){
        cout<<n;
    }else if(m==n){
        cout<<n+1;
    }else{
        int ans =n;
        //int d = n;
        while(n>=m){
           ans+=n/m;
           n=n/m+(n%m);
        }
        cout<<ans;
     }


    return 0;
}