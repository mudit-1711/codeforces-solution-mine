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
    long long i,j,x,n,t,k;
    cin>>x;
    string s = to_string(x);
    for(i=0;i<s.size();i++){
        if(s[i]-'0'>9-(s[i]-'0')){
            if(i==0 && 9-(s[i]-'0')==0) continue;
            s[i]=(9-(s[i]-'0'))+'0';
        }
    }
cout<<stoll(s);
    return 0;
}