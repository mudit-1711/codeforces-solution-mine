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
        vector<int>a(n);
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        int l=0;
        for(i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                l=max(l,a[i]-a[i+1]);
            }
        }
        if (l == 0) {
        cout << "YES\n";
        continue;
    }
        int d=0;
        bool ok = false;
        for(i=0;i<n-1;i++){
            if(a[i]>a[i+1])d++;
            if(a[i+1]-a[i]>=l){
                d=0;
            }else{
                if(d>1){
                    ok =true;
                    break;
                }
            }
        }
        if(ok){
            cout<<"NO"<<endl;
        }else{
        cout<<"YES"<<endl;
        }
    }

    return 0;
}