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
    long long  i,j,n,t,k;
    cin>>n;
    if(n>0)cout<<n;
    else{
    long long v1 = n/10;
    string s = to_string(n);
    char ld = s[s.size()-1];
    s.pop_back();
    s.pop_back();
    s+=ld;
    long long v2 = stoll(s);
    cout<<max(v1,v2);
    }
    return 0;
}