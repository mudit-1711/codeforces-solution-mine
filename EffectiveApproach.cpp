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
    long long i,j,k,n,m;
    cin>>n;
    vector<long long>a(n);
    map<long long, long long> mp;
    for(i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]=i+1;
    }
    cin>>m;
    long long v=0,p=0;
    vector<long long>b(m);
    for(i=0;i<m;i++){
        cin>>b[i];
        v+=mp[b[i]];
        p+=n-mp[b[i]]+1;
    }
    cout<<v<<" "<<p;
    return 0;
}