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
    int i,j,k,n,t,m;
    cin>>n>>m;
    vector<pair<string,string>>v;
    while(m--){
        string a,b;
        cin>>a>>b;
        v.push_back({a,b});
    }
    vector<string>c(n);
    for(i=0;i<n;i++){
        cin>>c[i];
    }
    string ans ="";
    for(i=0;i<n;i++){
        string ch = c[i];
        for(auto x:v){
            if(x.first==ch||x.second==ch){
                if(x.first.size()>x.second.size()){
                    ans+=x.second;
                    ans+=" ";
                }else if(x.first.size()<x.second.size()){
                    ans+=x.first;
                    ans+=" ";
                }else{
                    ans+=x.first;
                    ans+=" ";
                }
            }
        }
    }
    cout<<ans;
    return 0;
}