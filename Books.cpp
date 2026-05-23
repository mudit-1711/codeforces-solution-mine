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
    long long  i,j,k,t,n;
    cin>>n>>t;
    vector<long long >arr(n);
    for(i=0;i<n;i++)
    cin>>arr[i];
    int left =0;
    long long sum=0;
    int right=0;
    int ans=0;
    for(right=0;right<n;right++){
        sum+=arr[right];
        while(sum>t){
         sum-=arr[left];
         left++;
        }
        ans=max(ans,right-left+1);

    }
    cout<<ans;
    return 0;
}