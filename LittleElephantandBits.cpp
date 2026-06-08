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
    int i,j;
    string s;
    cin>>s;
    string ans = s;
    bool zero = true;
    for(i=0;i<s.size();i++){
        if(s[i]=='0'){
            ans.erase(ans.begin()+i);
            zero=false;
            break;
        }
    }
    if(zero==true){
        ans.pop_back();
    }
    cout<<ans;// 1 1 1 1 1 1 1 

    return 0;
}// 1-1 2-2 3-1 4-2 5-2 6-3 7-3
