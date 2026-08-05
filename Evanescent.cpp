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
    int i,j,t,n;
    cin>>t;
    while(t--){
        cin>>n;
        string s;
        cin>>s;
        int ans =0;
        int c=1;
        for(i=1;i<n;i++){
            if(s[i]!=s[i-1])c++;
        }
        ans=c;
        for(i=1;i<n-1;i++){
            if(s[i-1]==s[i+1]&&s[i]!=s[i-1]){
                ans=min(ans,c-2);
            }else if(s[i]!=s[i-1]&&s[i]!=s[i+1]){
                ans=min(ans,c-1);
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}