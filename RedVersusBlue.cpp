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
    int i,j,t,r,b,n;
    cin>>t;
    while(t--){
        cin>>n>>r>>b;
        string ans ="";
        while(b>0){
            int block = (r + b) / (b + 1);
            string temp="";
            for(i=1;i<=block;i++){
                temp+='R';
            }
            ans+=temp;
            ans+='B';
            r-=block;
            b-=1;
        }
        while(r>0){
            ans+='R';
            r--;
        }
        cout<<ans<<endl;
    }

    return 0;
}