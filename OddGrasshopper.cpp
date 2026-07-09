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
    long long i,j,t,n,x;
    cin>>t;
    while(t--){
        cin>>x>>n;
        long long final;
        if(n%4==0){
            final=0;
        }else if(n%4==1){
            final=-n;
        }else if(n%4==2){
            final = 1;
        }else if(n%4==3){
            final = n+1;
        }
        if(x%2==0){
            final+=x;
        }else{
            final=x-final;
        }
        cout<<final<<endl;
    }

    return 0;
}