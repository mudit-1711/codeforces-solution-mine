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
     int i,j,k,t;
     cin>>t;
     while(t--){
        cin>>s;
        int ap=0;
        for(i=0;i<s.size()-1;i++){
            if(s[i]==s[i+1]){
                ap++;
            }
        }
        if(ap<=2){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
     }

    return 0;
}