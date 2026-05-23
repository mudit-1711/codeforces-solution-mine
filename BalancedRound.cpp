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
    int i,j,k,t,n;
    cin>>t;
    while(t--){
        cin>>n>>k;
        vector<int>arr(n);
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        vector<int>diff;
        for(i=0;i<n-1;i++){
            diff.push_back(arr[i+1]-arr[i]);
        }
        int count=0;
        int mx=0;
        for(i=0;i<diff.size();i++){
            if(diff[i]<=k){
                count++;
            }else{
                count=0;
            }
            mx = max(mx,count);
        }
        cout<<n-(mx+1)<<endl;
    }

    return 0;
}