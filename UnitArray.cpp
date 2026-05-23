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
        int neg =0,pos=0;
        for(i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==-1)neg++;
            if(a[i]==1)pos++;
        }
        int op=0;
          while(neg > pos) {
            neg--;
            pos++;
            op++;
        }
        if(neg % 2 == 1) {
            op++;
        }
            cout<<op<<endl;
    }

    return 0;
}