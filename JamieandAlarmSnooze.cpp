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
bool isseven(int x ){
    while(x>0){
        if(x%10==7){
            return true;
        }
        x=x/10;
    }
    return false;
}
int main() {
    int i,j,h,m,x;
    cin>>x;
    cin>>h>>m;
    int ans =0;
    if(isseven(h)||isseven(m)){
        cout<<0;
        return 0;
    }
    while(!isseven(h)&&!isseven(m)){
        if(m>=x){
            m=m-x;
            ans++;
            if(isseven(h) || isseven(m)){
                cout << ans;
                return 0;
            }
        }else{
            h=h-1;
             if(h < 0){
                h = 23;
            }
            m=60-abs(x-m);
            ans++;//1+1+
            if(isseven(h)||isseven(m)){
                cout<<ans<<endl;
                return 0;
            }
        }
    }

    return 0;
}