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
    int i,j,t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = s.size();
        if(s[0]==s[n-1]){
            cout<<s<<endl;
        }else{
            if(s[0]=='a'){
                s[0]='b';
                cout<<s<<endl;
            }else{
                s[0]='a';
                cout<<s<<endl;
            }
        }
    }

    return 0;
}