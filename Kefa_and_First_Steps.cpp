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
    int n;
    cin>>n;
    vector<int>arr(n);
    int i,j=1;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxlen=1;
    i=0;
    while(i<n-1){
        if(arr[i]<=arr[i+1]){
          j++;
        }else{
            j=1;
        }
        i++;
        maxlen=max(maxlen,j);
    }
    cout<<maxlen;

    return 0;
}