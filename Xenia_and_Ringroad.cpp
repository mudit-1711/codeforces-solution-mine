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
    long long i,j,k,n,m;
    cin>>n>>m;
    vector<long long>arr(m);
    for(i=0;i<m;i++){
        cin>>arr[i];
    }
    long long time =0;
    long long curr=1;
    for(i=0;i<m;i++){
        if(arr[i]>=curr){
            time+=arr[i]-curr;
        }else{
            time+=(n-curr)+arr[i];
        }
        curr=arr[i];
    }
    cout<<time;

    return 0;
}