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
    int i,j,n,k;
    string s;
    cin>>n;
    cin>>s;
  int d=0,a=0;
  for(char c : s){
    if(c=='A'){
        a++;
    }else{
        d++;
    }

  }
   if(a>d){
    cout<<"Anton";
   }else if(a<d){
    cout<<"Danik";
   }else{
    cout<<"Friendship";
   }
    return 0;
}