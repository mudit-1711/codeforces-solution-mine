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
    int i,j,n,x;
    string s;
    vector<pair<string,int>> v;
    unordered_map<string,int> mpp;
    cin>>n;
    while(n--){
        cin>>s>>x;
        v.push_back({s,x});
        mpp[s]+=x;
    }
    unordered_map<string,int> cur;
    int mx = INT_MIN;
    for(auto it : mpp)
        mx = max(mx, it.second);
    for(auto it :v){
        cur[it.first]+=it.second;
        if(cur[it.first] >= mx && mpp[it.first] == mx) {
            cout << it.first;
            break;
        }
    }
    

    return 0;
}