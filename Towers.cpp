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
    int n,i,j;
    cin>>n;
    vector<int>a(n);
    map<int,int>mpp;
    for(i=0;i<n;i++){
        cin>>a[i];
        mpp[a[i]]++;
    }
    int maxi =-1;
    for(auto x : mpp){
        if(x.second>maxi){
            maxi=x.second;
        }
    }
    cout<<maxi<<" "<<mpp.size();
    return 0;
}