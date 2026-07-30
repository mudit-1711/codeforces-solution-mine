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
    int i,j,n,t;
    cin>>n;
    int one =0;
    vector<int>a(n);
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1)one++;
    }
    if((n-one)==0){
        cout<<n-1;
        return 0;
    }
    int len=0;
    int curr=0;
    for(i=0;i<n;i++){
        if(a[i]==0){
            curr++;
        }else{
            curr--;
        }
        len=max(len,curr);
        if(curr<0){
            curr=0;
        }
    }
    cout<<len+one;
    return 0;
}