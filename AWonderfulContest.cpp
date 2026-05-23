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
    int i,j,n,t,k;
    cin>>t;
    while(t--){
        cin>>n;
        bool p=false;
        vector<int>a(n);
        for(i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==100){
                p = true;
            }
        }
        if(p){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
        
    }

    return 0;
}