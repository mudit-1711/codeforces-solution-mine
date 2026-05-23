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
    int i,j,n,t;
    cin>>t;
    string s;
    while(t--){
        cin>>n;
        cin>>s;
        int l=0;
        int r = n-1;
        int ans=n;
        if(s.empty()){
            cout<<0<<endl;
            continue;
        }
        while(l<=r){
            if((s[l]=='0'&&s[r]=='1')||(s[l]=='1'&&s[r]=='0')){
                ans = ans-2;
                l++;
                r--;
            }else{
                break;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}