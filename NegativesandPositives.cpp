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
    int i,j,n,t,k;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int>a(n);
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        int neg=0;
        long long sum=0;
        for(i=0;i<n;i++){
            if(a[i]<0){
                neg++;
                a[i]=-a[i];
            }
            sum+=a[i];
        }
        sort(a.begin(),a.end());
        if(neg%2==1){
            sum-=2*a[0];
        }
        cout<<sum<<endl;
    }

    return 0;
}