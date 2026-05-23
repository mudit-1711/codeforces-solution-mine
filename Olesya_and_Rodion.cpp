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
    int i,j,k,t,n;
    cin>>n>>t;
    if(t==10){
        if(n==1){
            cout<<-1;
        }else{
            cout<<1;
            for(i=1;i<n;i++){
                cout<<0;
            }
        }
    }else{
        for(i=0;i<n;i++){
            cout<<t;
        }
    }

    return 0;
}