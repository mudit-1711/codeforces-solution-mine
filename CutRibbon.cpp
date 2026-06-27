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
// int f(int x,int a,int b,int c,vector<int>&dp){
//     if (x == 0) return 0;   
//     if (x < 0) return INT_MIN; 
//     if(dp[x]!=-1)return dp[x];
//     int fs = f(x-a,a,b,c,dp);
//     int ss = f(x-b,a,b,c,dp);
//     int ts = f(x-c,a,b,c,dp);
//    return dp[x]=1+ max(fs,max(ss,ts));
// }
int main() {
    int i,j,n,a,b,c;
    cin>>n>>a>>b>>c;
    vector<int>dp(n+1,INT_MIN);
    // cout<<f(n,a,b,c,dp);
    dp[0]=0;
    for(i=1;i<=n;i++){
        if(i>=a){
            dp[i]=max(dp[i],dp[i-a]+1);
        }
        if(i>=b){
            dp[i]=max(dp[i],dp[i-b]+1);
        }
        if(i>=c){
            dp[i]=max(dp[i],dp[i-c]+1);
        }
    }
    cout<<dp[n];
    return 0;
}