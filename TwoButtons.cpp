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
    int n,m;
    cin>>n>>m;
    //cout<<abs(n-m);
    int c=0;
    while(m>n){
      if(m%2==0){
        m=m/2;
      }else{
        m++;
      }
      c++;
    }
    c+=(n-m);
cout<<c;
    return 0;
}