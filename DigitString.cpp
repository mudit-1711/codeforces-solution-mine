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
    string s;
    while(t--){
        cin>>s;
        int c13=0;
        for(auto x : s){
            if(x=='1'||x=='3'){
            c13++;
            }
        }
        int maxi=c13;
        int c2=0;
        for(auto x : s){
            if(x=='2'){
                c2++;
            }else if(x=='1'||x=='3'){
                c13--;
            }
            maxi=max(maxi,c2+c13);
        }
        cout<<s.size()-maxi<<endl;
    }

    return 0;
}