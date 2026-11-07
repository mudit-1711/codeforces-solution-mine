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
    long long i,j,n,t;
    cin>>t;
    while(t--){
        cin>>n;
        vector<long long>a(n);
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.rbegin(),a.rend());
        long long x1=0,y=0,x2=0,y2=0;
        for(i=0;i<n;i++){
            j=(1LL<<a[i]);
            if(i==0)x1+=j;
            else if(i==1)x2+=j;
            else    
                if(x1<x2)x1+=j;
                else x2+=j;
        }
        cout<<1LL*x1*x2<<endl;
    }

    return 0;
}