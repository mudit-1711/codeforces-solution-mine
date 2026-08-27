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
    int n,i,j;
    cin>>n;
    string s;
    cin>>s;
    bool ok = false;
    for(i=0;i<n-1;i++){
        if(s[i]>s[i+1]){
            cout<<"YES"<<endl;
            cout<<i+1<<" "<<i+2<<endl;
            ok = true;
            break;
        }
    }
    if(!ok){
        cout<<"NO"<<endl;
    }

    return 0;
}