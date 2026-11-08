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
        cout<<"? 1 "<<n<<endl;
        cin>>k;
        if(k==-1)exit(0);
        
        if(k==0||k==n){
            cout<<"! NO"<<endl;
        } else {
            cout<<"? 1 "<<k<<endl;
            int c;
            cin>>c;
            if(c==-1)exit(0);
            
            if(c==k){
                cout<<"! NO"<<endl;
            } else {
                cout<<"! YES"<<endl;
            }
        }
    }

    return 0;
}