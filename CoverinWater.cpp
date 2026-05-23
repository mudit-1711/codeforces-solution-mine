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
    int i,j,t,n,k;
    cin>>t;
    while(t--){
        cin>>n;
        string s;
        cin>>s;
        int ans =0;
        int tot =0;
        for(i=0;i<n;i++){
            if(s[i]=='.')tot++;
        }
        bool ok =false;
        for(i=1;i<n-1;i++){
            if(s[i]=='.'&&s[i-1]=='.'&&s[i+1]=='.'){
                ok = true;
                break;
            }
        }
        if(ok){
            cout<<2<<endl;
        }else{
            cout<<tot<<endl;
        }
    }

    return 0;
}