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
    int i,j,k,t,n,a;
    cin>>t;
    while(t--){
        cin>>a>>n;
        vector<int>d(n);
        for(i=0;i<n;i++){
            cin>>d[i];
        }
        int n1 = d[1]*10 + d[0];
        int n2 = d[0]*10 + d[1];
        int n3 = d[0]*10 + d[0];
        int n4 = d[1]*10 + d[1];
        int m1 = abs(n1-a);
        int m2 = abs(n2-a);
        int m3 = abs(n3-a);
        int m4 = abs(n4-a);
        cout<<min(m1,min(m2,min(m3,m4)))<<endl;
    }

    return 0;
}