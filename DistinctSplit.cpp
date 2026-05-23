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
        string s;
        cin>>s;
        unordered_map<char,int>st;
        for(auto c : s){
            st[c]++;
        }
        int ans = 0;
        int maxi =0;
        for(i=0;i<n;i++){
            if(st[s[i]]){
                ans++;
                maxi = max(maxi,ans);
                st[s[i]]--;
            }else{
                ans=0;
            }
        }
        cout<<maxi<<endl;
    }

    return 0;
}