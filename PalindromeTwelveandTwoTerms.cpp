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
bool isp(long long x){
    string s = to_string(x);
    string temp =s;
    reverse(temp.begin(),temp.end());
    return s==temp;
}
int main() {
    long long  i,j,k,t,n;
    cin>>t;
    while(t--){
        cin>>n;
        bool ok = false;
        for(i=n%12;i<=n;i+=12){
            if(isp(i)){
                cout<<i<<" "<<n-i<<endl;
                ok = true;
                break;
            }
        }
        if(!ok){
            cout<<-1<<endl;
        }
    }

    return 0;
}