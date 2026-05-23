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
            vector<int>a(n);
            for(i=0;i<n;i++){
                cin>>a[i];
            }
            int cost =0 ;
            bool g =false;
            bool zero = false;
            for(i=n-1;i>=0;i--){
                if(a[i]>=2){
                    cost=(cost+a[i]);
                    g = true;
                }else if(a[i]==1&&!g){
                    zero = true;
                }
            }
            if(zero){
                cost = (cost+1);
            }
            cout<<cost%676767677<<endl;

        }
    return 0;
}