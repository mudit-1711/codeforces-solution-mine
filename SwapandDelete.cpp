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
    int i,j,k,t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s.size()==0){
            cout<<0<<endl;
            continue;
        }
        if(s.size()==1){
            cout<<1<<endl;
            continue;
        }
        int zero =0,one =0;
        for(auto x : s){
            if(x=='0')zero++;
            else one++;
        }
        if(one==zero){
            cout<<0<<endl;
            continue;
        }

        int ans =0;
        for(i=0;i<s.size();i++){
            if(s[i]=='0'){
                if(one>0){
                    one--;
                }else{
                    ans = s.size()-i;
                    break;
                }
            }else{
                if (zero > 0) {
                    zero--;
                }
                else {
                    ans = s.size() - i;
                    break;
                }
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}