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
        int xo=0;
        for(i=0;i<n;i++){
            cin>>a[i];
            xo=xo^a[i];
        }
      if(n%2==0&&xo==0){
        cout<<0<<endl;
      }else if(n%2==1){
        cout<<xo<<endl;
      }else {
        cout<<-1<<endl;
      }

    }

    return 0;
}