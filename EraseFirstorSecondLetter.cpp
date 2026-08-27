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
        string s;
        cin>>s;
        map<char,int>freq;
        int c =0;
        vector<int>unique(n);
        for(i=0;i<n;i++){
            freq[s[i]]++;
            if(freq[s[i]]==1){
                c++;
            }
            unique[i]=c;
        }
        long long ans=0;
        for(auto x : unique)ans+=x;
        cout<<ans<<endl;
    }

    return 0;
}