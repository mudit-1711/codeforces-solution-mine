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
    int i,j,t,n;
    cin>>n>>t;
    vector<int>a(n+1);
    for(i=1;i<n;i++){
        cin>>a[i];
    }
    int curr =1;
   // i=1;
    while(curr<n){
      if(curr==t){
        cout<<"YES";
        return 0;
      }
      curr+=a[curr];
    }
cout<<(curr==t ? "YES": "NO");
    return 0;
}