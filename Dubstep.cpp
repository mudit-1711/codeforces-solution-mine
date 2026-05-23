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
    string s;
    cin>>s;
    string ans ="";
    int i,j;
    for(i=0;i<s.size();i++){
        if(i+2<s.size()&&s.substr(i,3)=="WUB"){
          if(!ans.empty()&&ans.back()!=' '){
            ans+=" ";
          }
          i+=2;
        }else{
            ans+=s[i];
        }
    }
cout<<ans;
    return 0;
}