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
    long long i,j,t,n;
    cin>>t;
    while(t--){
        cin>>n;
        string s;
        cin>>s;
        long long sum=0,ans=0;
        map<long long,long long>mpp;
        mpp[0]=1;
        for(i=0;i<n;i++){
            sum+=(s[i]-'0')-1;
            ans+=mpp[sum];
            mpp[sum]++;
        }
        cout<<ans<<endl;
    }

    return 0;
}