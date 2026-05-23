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
    int n,m,a,b,i,j,k;
    cin>>n>>m>>a>>b;
    if(m==n){
       if(n*a>=b){
        cout<<b;
       }else{
        cout<<n*a;
       }
    }else if (m>n){
         if(n*a<=b){
            cout<<n*a;
         } else{
            cout<<b;
         }
    }else{
        int k = (n+m-1)/m;
        int mix = (n/m)*b + (n%m)*a;
        cout<<min(n*a,min(k*b,mix));
    }

    return 0;
}