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
    long long i,j,n;
    cin>>n;
    vector<long long>a(n);
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    long long mini = a[n-1];
    long long ans =mini;
    for(i=n-2;i>=0;i--){
        mini = min(mini-1,a[i]);
        if(mini<0){
            mini=0;
        }
        ans+=mini;
    }
    cout<<ans;
    return 0;
}