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
    long long i,j,k,nb,ns,nc,pb,ps,pc,r;
    string a;
    cin>>a;
    int b =0,s=0,c=0;
    for(i=0;i<a.size();i++){
        if(a[i]=='B'){
            b++;
        }else if(a[i]=='C'){
            c++;
        }else{
            s++;
        }
    }
      cin>>nb>>ns>>nc;
      cin>>pb>>ps>>pc;
      cin>>r;
      long long l=0,h=1e13,ans=0;
      while(l<=h){
        long long mid = (l+h)/2;
        long long needb = max(0ll,b*mid-nb);
        long long needs = max(0ll,s*mid-ns);
        long long needc = max(0ll,c*mid-nc);
        long long cost = needb*pb + needs*ps + needc*pc;
        if(cost<=r){
            ans=mid;
            l=mid+1;
        }else{
            h = mid-1;
        }
      }
      cout<<ans;
    return 0;
}