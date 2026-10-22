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
    int i,j,n;
    cin>>n;
    map<string,int>mpp;
    vector<pair<string,int>>v;
    while(n--){
        string s;
        int num;
        cin>>s>>num;
        mpp[s]+=num;
        v.push_back({s,num});
    }
    int c=0;
    bool single=false;
    int maxi=-1001;
    for(auto x : mpp){
        if(x.second>maxi){
            maxi=x.second;
            c=1;
        }
        else if(maxi==x.second)c++;
    }
    string ans;
    if(c==1)single=true;
    if(single){
        for(auto x : mpp){
            if(x.second==maxi)ans=x.first;
        }
    }
    map<string,int>m;
    for(auto x : v){
        m[x.first]+=x.second;
        if(m[x.first]>=maxi && mpp[x.first]==maxi){
            ans=x.first;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}