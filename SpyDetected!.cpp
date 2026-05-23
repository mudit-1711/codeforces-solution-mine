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
    int t,i,j,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int>a(n);
        for(i=0;i<n;i++)cin>>a[i];
        map<int,int>mpp;
        for(auto x : a)
        mpp[x]++;
        for(auto x : mpp){
            if(x.second==1)j=x.first;
        }
    for(i=0;i<n;i++){
        if(a[i]==j)cout<<i+1<<endl;
    }
    }

    return 0;
}