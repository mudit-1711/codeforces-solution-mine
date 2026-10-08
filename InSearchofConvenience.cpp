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
    int t;
    cin >> t;
    while(t--) {
        long long x,y,r;
        cin >> x >> y >> r;
        for(long long i=0;i<=r;i++) {
            long long v=r*r-i*i;
            long long j=sqrt(v);

            if(j*j==v) {
                cout << x+i << " " << y+j << endl;
                break;
            }
        }
    }

    return 0; 
}