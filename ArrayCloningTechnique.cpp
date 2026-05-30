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
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long i,j,n,k,t;
    cin>>t;
    while(t--){
        cin>>n;
        map<long long,long long>mpp;
        vector<long long>a(n);
        for(i=0;i<n;i++){
            cin>>a[i];
            mpp[a[i]]++;
        }
        long long maxi=-1;
        for(auto x : mpp){
            if(x.second>maxi){
                maxi = x.second;
            }
        }
        if(maxi==n){
            cout<<0<<"\n";
            continue;
        }
       
        long long op = 0;
        while(maxi < n){
        op++;
        long long x = min(maxi, n - maxi);
        op += x;
        maxi += x;
        }
        cout<<op<<"\n";
    }

    return 0;
}