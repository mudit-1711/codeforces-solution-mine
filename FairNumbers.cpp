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
bool isfair(long long n){
    long long x = n;
    while(x>0){
        long long d = x%10;
        if(d==0){
            x=x/10;
            continue;
        }else{
            if(n%d!=0){
                return false;
            }
        }
        x=x/10;
    }
    return true;
}
int main() {
    long long i,j,t,n;
    cin>>t;
    while(t--){
        cin>>n;
        while(!isfair(n)){
            n+=1;
        }
        cout<<n<<endl;
    }

    return 0;
}