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
    int i,j;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int even=0,odd=0;
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
        }else{
            odd++;
        }
    }
    if(even>odd){
        for(i=0;i<n;i++){
            if(arr[i]%2!=0){
                cout<<i+1;
                return 0;
            }
        }
    }else{
         for(i=0;i<n;i++){
            if(arr[i]%2==0){
                cout<<i+1;
                return 0;
            }
        }
    }

    return 0;
}