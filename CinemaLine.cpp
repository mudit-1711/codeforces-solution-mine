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
    int i,j,k,n;
    cin>>n;
    vector<int>v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    int h=0,f=0,t=0;
    bool ok = true;
    for(i=0;i<n;i++){
        if(v[i]==25){
            t++;
        }else if(v[i]==50){
            if(t==0){
                ok = false;
                break;
            }
            t--;
            f++;
        }else{
             if(f >= 1 && t >= 1) {
                f--;
                t--;
            }
            else if(t >= 3) {
                t -= 3;
            }
            else {
                ok = false;
                break;
            }
            h++;
        }
    }
    if(ok) cout << "YES";
    else cout << "NO";
    return 0;
}