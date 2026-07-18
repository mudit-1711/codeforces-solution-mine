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
    int i,j,n,k,t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        string s;
        cin>>s;
        if (n < 2 * k) {
        cout << -1 << endl;
        continue;
       }
       int f=0;
       for(i=0;i<k;i++){
        if(s[i]=='L')f+=1;
       }
       for(i=n-k;i<n;i++){
        if(s[i]=='R')f+=1;
       }
       cout<<f<<endl;
    }
    return 0;
}