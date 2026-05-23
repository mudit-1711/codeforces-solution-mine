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
    int i,j,s,n,k;
    cin>>s>>n;
    vector<pair<int,int>> vt;
    while(n--){
        int x,y;
        cin>>x>>y;
        vt.push_back({x,y});
    }
    sort(vt.begin(),vt.end());
    int st = s;
    for(i=0;i<vt.size();i++){
        if(st<=vt[i].first){
            cout<<"NO";
            return 0;
        }else{
            st+=vt[i].second;
        }
    }
    cout<<"YES";
    return 0;
}