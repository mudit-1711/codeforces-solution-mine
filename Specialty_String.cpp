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
    string s;
    cin>>t;
    while(t--){
        stack<int>st;
        cin>>n;
        cin>>s;
        for(auto x : s){
            if(!st.empty()&&st.top()==x){
                st.pop();
            }else{
                st.push(x);
            }
        }
       if(!st.empty()){
        cout<<"NO"<<endl;
       }else{
        cout<<"YES"<<endl;
       }
    }

    return 0;
}