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
    int n,m,i,j;
    cin>>n;
    vector<int>a(n);
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>m;
    vector<int>b(m);
    for(i=0;i<m;i++){
        cin>>b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int l =0,r=0;
    int ans=0;
    while(l<n&&r<m){
       if(abs(a[l]-b[r])<=1){
        ans++;
        l++;
        r++;
       }else if(a[l]<b[r]){
        l++;
       }else{
        r++;
       }
    }
    cout<<ans;
    return 0;
}