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
    cin>>n>>m;
    vector<int>a(n);
    for(i=0;i<n;i++)cin>>a[i];
    for(i=0;i<a.size();i++){
        if(a[i]<m){
            a.erase(a.begin() + i);
            i--;
        }else{
            a.push_back(a[i]);
            a.erase(a.begin() + i);
            i--;
        }
    }
    cout<<a[a.size()-1];
    return 0;
}