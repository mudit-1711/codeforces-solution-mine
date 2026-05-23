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
    int i,j,n,m,k,t,x;
    cin>>t;
    while(t--){
        string s;
        string x;
        cin>>n>>m;
        cin>>x;
        int ans =0;
        bool ok = false;
        cin>>s;
        while(n<=100){
            if(x.find(s)!=string::npos){
                ok = true;
                break;
            }else{
                x=x+x;
                n=2*n;
                ans++;
            }
        }
        if(ok==false){
            cout<<-1<<endl;
        }else{
              cout<<ans<<endl;
        }
    }


    return 0;
}