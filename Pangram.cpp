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
    int i,j,k,n;
    string s;
    cin>>n;
    cin>>s;
    for(i=0;i<n;i++){
        s[i]=tolower(s[i]);
    }
    vector<int>freq(26,0);
    for(auto x : s){
        freq[x-'a']++;
    }
    for(i=0;i<26;i++){
        if(freq[i]==0){
            cout<<"NO";
            return 0;
        }
    }
cout<<"YES";

    return 0;
}