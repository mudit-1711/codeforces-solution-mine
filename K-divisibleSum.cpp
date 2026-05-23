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
    long long i,j,n,k,t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        if(k>=n){
        cout<<((k+n-1)/n)<<endl;
        }else{
            if(n%k==0){
                cout<<1<<endl;
            }else{
                cout<<2<<endl;
            }
        }
    }

    return 0;
}