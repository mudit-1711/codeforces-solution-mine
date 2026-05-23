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
    long long i,j,a,b,n,t;
    cin>>t;
    while(t--){
        cin>>a>>b>>n;
        vector<long long>x(n);
        for(i=0;i<n;i++)cin>>x[i];
       long long time = b;
       for(i=0;i<n;i++){
            time+=min(x[i],a-1);
    }
    cout<<time<<endl;
    }
    return 0;
}