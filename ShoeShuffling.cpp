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
    while(t--){
        cin>>n;
        vector<int>s(n);
        for(i=0;i<n;i++){
            cin>>s[i];
        }
        map<int,int>mpp;
        for(auto x : s)mpp[x]++;
        bool no = false;
        for(auto x : mpp){
            if(x.second==1){
                 no=true;
                 break;
            }
        }
        if(no){
            cout<<-1<<endl;
            continue;
        }
        vector<int>p(n);
        for(i=0;i<n;i++){
            p[i]=i+1;
        }
        i=0,j=0;
        while(j<n){
            if(s[i]==s[j]){
                j++;
            }else{
                rotate(p.begin()+i,p.begin()+i+1,p.begin()+j);
                i=j;
            }
        }
        rotate(p.begin()+i,p.begin()+i+1,p.begin()+j);
        for(auto x : p){
            cout<<x<<" ";
        }
        cout<<endl;
    }


    return 0;
}