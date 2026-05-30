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
    long long i,j,n,k,t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        vector<long long>a(n*k);
        for(i=0;i<n*k;i++){
            cin>>a[i];
        }
        long long p = n*k;
        long long sum=0;
        while(k--){
            p-=(n/2 +1);
            sum+=a[p];
        }
        cout<<sum<<endl;
    }

    return 0;
}