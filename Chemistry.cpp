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
    int i,j,t,n,k;
    cin>>t;
    vector<string>ans;
    while(t--){
        cin>>n>>k;
        string s;
        
        cin>>s;
        vector<int>freq(26,0);
        for(auto x : s){
            freq[x-'a']++;
        }
        int odd=0;
        for(i=0;i<26;i++){
            if(freq[i]%2==1)odd++;
        }
        if(odd-k<=1){
            ans.push_back("YES");
        }else{
            ans.push_back("NO");
        }
    }
for(i=0;i<ans.size();i++){
    cout<<ans[i]<<endl;
}
    return 0;
}