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
        vector<int>a(n);
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        int m = *max_element(a.begin(),a.end());
        vector<int>b,c;
        for(auto i : a){
            if(i<m){
                b.push_back(i);
            }else{
                c.push_back(i);
            }
        }
        if(b.empty()){
            cout<<-1<<endl;
        }else{
            cout<<b.size()<<" "<<c.size()<<endl;
            for(auto i : b){
                cout<<i<<" ";
            }
            cout<<endl;
            for(auto i : c){
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}