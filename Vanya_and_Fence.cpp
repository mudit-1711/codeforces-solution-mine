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
  int i,j,k,n,h;
  int ans=0;
  cin>>n>>h;
   vector<int>arr(n);
   for(i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]>h){
        ans+=2;
    }else{
        ans+=1;
    }
   }
   cout<<ans;
    return 0;
}