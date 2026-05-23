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
    int i,j,k,n,t;
    cin>>n;
    map<string,int>mpp;
    while(n--){
        string s;
        cin>>s;
        mpp[s]++;
    }
    int maxi=-1;
    string ans;
    for(auto x : mpp){
       if(x.second>maxi){
        maxi=x.second;
        ans=x.first;
       }
    }
    cout<<ans;
    return 0;
}