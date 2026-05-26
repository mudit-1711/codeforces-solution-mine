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
    int i,j,n,m;
    cin>>n>>m;
    if(m%n!=0){
        cout<<-1;
    }
    else{
        int x = m/n;
        int ans =0;
        while(x%2==0){
            ans++;
            x=x/2;
        }
        while(x%3==0){
            ans++;
            x=x/3;
        }
        if(x!=1){
            cout<<-1;
        }else{
            cout<<ans;
        }
    }

    return 0;
}