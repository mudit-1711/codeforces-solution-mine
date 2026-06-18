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
    long long i,j,t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        vector<pair<long long,long long>>a(n);
        for(i=0;i<n;i++){
            cin>>a[i].first;
            a[i].second=i+1;
        }
        for(i=0;i<n;i++){
            a[i].first=a[i].first%k;
            if(a[i].first==0){
                a[i].first=k;
            }
        }
        sort(a.begin(),a.end(),[&](auto a , auto b){
            if(a.first==b.first){
                return a.second<b.second;
            }else{
                return a.first>b.first;
            }
        });
        for(auto x : a){
            cout<<x.second<<" ";
        }
        cout<<endl;
    }

    return 0;
}