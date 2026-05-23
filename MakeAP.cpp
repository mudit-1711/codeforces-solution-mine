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
    int i,j,t,a,b,c;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        bool ok =false;
        long long x ;
        x = 2*b-c;
        if(x>0&&x%a==0)ok = true;
        x = a+c;
        if(x%2==0&&(x/2)%b==0)ok = true;
        x = 2*b - a;
        if(x>0&&x%c==0)ok = true;
        if(ok){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

    }

    return 0;
}