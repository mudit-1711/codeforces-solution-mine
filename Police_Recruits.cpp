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
    int i,j,n;
    cin>>n;
    int a= 0,ans=0;
    vector<int>arr(n);
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        if(arr[i]>0){
            a+=arr[i];
        }
        if(a==0&&arr[i]==-1){
       ans++;
        }
        if(a!=0&&arr[i]==-1)a--;
        
    }
cout<<ans;
    return 0;
}