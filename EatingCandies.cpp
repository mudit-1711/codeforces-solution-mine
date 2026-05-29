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
    int i,j,k,n,t;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int>w(n);
        for(i=0;i<n;i++){
            cin>>w[i];
        }
        int ans=0;
        int l=0,r=n-1;
        long long a=0,b=0;
        while(l<=r){
            if(a<=b){
                a+=w[l];
                l++;
            }else{
                b+=w[r];
                r--;
            }
            if(a==b){
                ans=l+(n-1-r);
            }
        }
       cout<<ans<<endl;
    }

    return 0;
}
//1 2 3 4 
//2 4 6 8
//3 6 9 12
//4 8 12 16
// 1 + 2 + 4 + 6 + 9 + 12 + 16...n*n
//1 + 4 + 9...nsquare
// 2 + 6 + 12 + 20 + 30 ... n-1 terms