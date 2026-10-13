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
    int i,j,n,m;
    cin>>n>>m;
    vector<int>a(n);
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int>p(n+1,0);
    unordered_set<int>st;
    for(i=n-1;i>=0;i--){
        if(st.find(a[i])==st.end()){
            st.insert(a[i]);
        }
        p[i]=st.size();
    }
    while(m--){
        int l;
        cin>>l;
        cout<<p[l-1]<<endl;
    }

    return 0;
}