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
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        stack<int> st;
        vector<int> p(n+1,0);
        for(int i=1;i<=n;i++) {
            if(s[i-1]=='1') {
                st.push(i);
            }
            else if(s[i-1]=='2') {
                if(!st.empty()) {
                    p[st.top()]=1;
                    st.pop();
                }
                else {
                    p[i]=1;
                }
            }
            else {
                p[i]=1;
            }
        }
        int ans=0;
        for(int i=1;i<=n;i++) {
            if(!p[i])
                ans++;
        }
        cout << ans << endl;
        for(int i=1;i<=n;i++) {
            if(!p[i])
                cout << i << " ";
        }
        cout << endl;
    }
    return 0; 
}