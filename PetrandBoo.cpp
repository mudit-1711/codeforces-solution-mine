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
    int i,j,k,n,t;
    cin>>n;
    vector<int>a(7);
    for(i=0;i<7;i++){
        cin>>a[i];
    }
    int ans =0;
    int idx=0;
    while(n>0){
        n-=a[idx];
        if (n <= 0) {
            cout << idx + 1;
            return 0;
        }
        idx= (idx+1)%7;
    }

    return 0;
}