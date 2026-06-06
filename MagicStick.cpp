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
    int t,x,y;
    cin>>t;
    while(t--){
        cin>>x>>y;
        if(x==y){
            cout<<"YES"<<endl;
            continue;
        }
        if(x==2&&y==3){
            cout<<"YES"<<endl;
            continue;
        }

        if (x == 1) {
            cout << "NO\n";
        }
        else if (x <= 3 && y > 3) {
            cout << "NO\n";
        }
        else {
            cout << "YES\n";
        }
        }


    return 0;
}