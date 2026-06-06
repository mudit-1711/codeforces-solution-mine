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
    long long t,i,j,x,y,k;
    cin>>t;
    while(t--){
        cin>>x>>y>>k;
        long long need = k*y + k-1;
        long long ans = (need +(x-2))/(x-1);
        cout<<ans+k<<endl;

    }

    return 0;
}