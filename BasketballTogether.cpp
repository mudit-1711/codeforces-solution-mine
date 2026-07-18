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
    int i,j,n,d,t;
    cin>>n>>d;
    vector<int>p(n);
    for(i=0;i<n;i++){
        cin>>p[i];
    }
    sort(p.begin(),p.end());
    // 50 60 70 80 90 100
    int l=0,r=n-1;
    int temp;
    int ans =0;
    while(l<=r){
        int need = d / p[r] + 1; 
        if (r - l + 1 >= need) {
        ans++;
        l += need - 1;   
        r--;     
    } else {
        break;
        }
    }
    cout<<ans;
    return 0;
}