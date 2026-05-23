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
    string ans="";
    cin>>s;
    int caps=0;
    for(char c : s){
        if(isupper(c)){
            caps++;
        }
    }
   if(caps==s.size()||((caps+1)==s.size()&&islower(s[0]))){
        for(char c : s){
            if(isupper(c)){
                ans+=tolower(c);
            }else{
                ans+=toupper(c);
            }
        }
        cout<<ans;
   }else{
    cout<<s;
   }
    return 0;
}