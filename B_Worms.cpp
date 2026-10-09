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
    int i,j,n,m;
    cin>>n;
    vector<int>a(n);
    for(i=0;i<n;i++){
        cin>>a[i];
        if(i>0) a[i]+=a[i-1];
    }
    cin>>m;
    vector<int>q(m);
    for(i=0;i<m;i++){
        cin>>q[i];
    }
    vector<int>ans;
    for(i=0;i<m;i++){
        int curr = q[i];
        int l=0,r=n-1;
        while(l<r){
            int mid=(l+r)/2;
            if(a[mid]>=curr)r=mid;
            else l = mid+1;
        }
        ans.push_back(l+1);
    }
    for(i=0;i<m;i++)cout<<ans[i]<<endl;
    return 0;
}