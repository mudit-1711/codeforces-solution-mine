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
    long long i,j,t,a,b,n;
    cin>>t;
    while(t--){
        cin>>n>>a>>b;
        long long m1 = a*n;
        long long m2 = b*(n/3) + a*(n%3);
        long long m3 = b*(n/3) + b;
        cout<<min(m1,min(m2,m3))<<endl;

    }

    return 0;
}