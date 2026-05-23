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
    int i,j,k,t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int k=0;
        vector<int>p(n+1);
        vector<int>flag(n+1);
        for(i=1;i<=n;i++){
            cin>>p[i];
            flag[p[i]]=i;
            if(p[i]<=i)k++;
        }
        int maxi = k;
        int g=0;
        for(j=1;j<=n;j++){
            if(flag[j]<j){
            int c = (j-1)-g;
            maxi=max(maxi,c);
            g++;
            }
        }
        
        cout<<maxi<<endl;
    }

    return 0;
}