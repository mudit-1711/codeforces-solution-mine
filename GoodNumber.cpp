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
bool help(string &s, int k) {
    int freq[10] = {0};
    for (char c : s) {
        freq[c - '0'] = 1;
    }
    for (int i = 0; i <= k; i++) {
        if (!freq[i]) return false;
    }
    return true;
}
int main() {
    long long i,j,n,k;
    long long ans =0;
    cin>>n>>k;
    while(n--){
        string s;
        cin>>s;
        if(help(s,k)){
            ans++;
        }
    }
    cout<<ans;
    return 0;
}