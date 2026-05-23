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
    int n ;
    string a = " I hate";
    string b = " I love";
    cin>>n;
    int i,j;
    string ans ="";
    for(i=1;i<=n;i++){
        if(i%2!=0){
            ans+=a;
        }
        
        if(i%2==0){
            ans+=b;
        }
        if(i != n) ans += " that";
    }

   ans+=" it";
   cout<<ans;
    return 0;
}