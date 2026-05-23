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
    int i,j,k,t,n,x;
    cin>>t;
    while(t--){
        cin>>n>>k>>x;
        if(x!=1){
            cout<<"YES"<<endl;
            cout<<n<<endl;
            for(i=1;i<=n;i++){
                cout<<1<<" ";
            }
            cout<<endl;
        }else{
            if(k==1||(k==2&&n%2==1)){
                cout<<"NO"<<endl;
            }else{
                cout<<"YES"<<endl;
                if(n%2==0){
                    cout<<n/2<<endl;
                    for(i=1;i<=n/2;i++){
                        cout<<2<<" ";
                    }
                    cout<<endl;
                }else{
                    cout<<(n-3)/2 + 1<<endl;
                    for(i=1;i<=((n-3)/2);i++){
                        cout<<2<<" ";
                    }
                    cout<<3<<endl;
                }
            }
        }
        
    }

    return 0;
}