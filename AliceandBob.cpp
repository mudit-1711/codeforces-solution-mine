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
    int i,j,t,n,a;
    cin>>t;
    while(t--){
        cin>>n>>a;
        vector<int>v(n);
        int less=0,great=0;
        for(i=0;i<n;i++){
            cin>>v[i];
            if(v[i]<=a-1)less++;
            if(v[i]>=a+1)great++;
        }
        if(less>great){
            cout<<a-1<<endl;
        }else{
            cout<<a+1<<endl;
        }
    }

    return 0;
}