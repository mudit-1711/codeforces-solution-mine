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
    int k,i;
    cin>>k;
    vector<int>v(12);
    for(i=0;i<12;i++){
        cin>>v[i];
    }
    sort(v.rbegin(),v.rend());
    int ans =0,sum=0;
    for(i=0;i<12;i++){
        if(sum>=k){
            cout<<ans<<endl;
            return 0;
        }
        sum+=v[i];
        ans++;
    }
    if(sum==k){
        cout<<ans<<endl;
    }
    if(sum<k){
        cout<<-1<<endl;
    }
    return 0;
}