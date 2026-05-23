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
    string h ="hello";
    cin>>s;
    int i=0,j=0;
    while(i<s.size()){
         if(s[i]==h[j]){
            j++;
         }
         i++;
    }
     if(j==5){
        cout<<"YES";
     }else{
        cout<<"NO";
     }
    return 0;
}