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
    long long i,j,k,t,n;
    cin>>t;
    while(t--){
        cin>>n>>k;
        vector<long long >a(n);
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        //k==2,3,4,5
        bool ok =false;
        long long mini =LLONG_MAX,even=0;
        for(i=0;i<n;i++){
            if(a[i]%2==0)even++;
            if(a[i]%k==0){
                ok =true;
                break;
            }
            mini=min(mini,k-(a[i])%k);
        }
        if(ok){
            cout<<"0"<<endl;
        }else if(k==4){
            if(even>=2)mini=0;
            else if(even==1)mini=min(mini,1LL);
            else mini = min(mini,2LL);
            
            cout<<mini<<endl;
        }else{
            cout<<mini<<endl;
        }
    }
    return 0;
}