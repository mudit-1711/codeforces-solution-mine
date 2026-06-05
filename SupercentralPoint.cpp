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
    int i,j,n,t,k;
    cin>>n;
    vector<pair<int,int>>v;
    while(n--){
        int x ,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    int ans =0;
    for(i=0;i<v.size();i++){
        bool left = false;
        bool right = false;
        bool up = false;
        bool down = false;
        for(j=0;j<v.size();j++){
            if(v[i].first==v[j].first){
                if(v[j].second<v[i].second){
                    down=true;
                }
                if(v[j].second>v[i].second){
                    up=true;
                }
            }
            if(v[i].second==v[j].second){
                if(v[j].first<v[i].first){
                    left=true;
                }
                if(v[j].first>v[i].first){
                    right=true;
                }
            }
        }
        if(left && right && up && down)
            ans++;
    }
cout<<ans;
    return 0;
}