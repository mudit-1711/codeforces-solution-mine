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
    int i,j,k,n,t;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int>b(n),a;
        for(i=0;i<n;i++){
            cin>>b[i];
        }
        a.push_back(b[0]);
        for(i=1;i<n;i++){
            if(b[i]>=b[i-1]){
                a.push_back(b[i]);
            }else{
                  a.push_back(b[i]);
                  a.push_back(b[i]);
            }
        }
        cout<<a.size()<<endl;
        for(auto x : a){
            cout<<x<<" ";
        }
        cout<<endl;

    }

    return 0;
}