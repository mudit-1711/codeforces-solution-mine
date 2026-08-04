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
    int i,j,ans=0,t,a,b,c;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        ans=0;
        while(true){
            vector<int>v;
            v.push_back(a);
            v.push_back(b);
            v.push_back(c);
            sort(v.begin(),v.end());

            if(v[0]==v[1] || v[1]==v[2]){
                break;
            }

            v[0]++;
            v[2]--;
            ans++;

            a=v[0];
            b=v[1];
            c=v[2];
        }
        cout<<ans<<endl;
    }
    return 0;
}