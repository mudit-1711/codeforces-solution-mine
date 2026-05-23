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
    // 1,2,3 2,4,6 3,6,9
    int i,j,n,x;
    int ans =0;
    cin>>n>>x;
    for(i=1;i<=n;i++){
       if(x%i==0&&x/i<=n){
        ans++;
       }
    }
    cout<<ans;
    return 0;
}