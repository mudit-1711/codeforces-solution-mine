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
    int i,j,t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int>a(n);
        int odd=0;
        int even=0,c=0;
        for(i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2!=0)odd++;
            else if(a[i]%4==0)c++;
            else even++;
        }
        cout<<max(odd,max(even,c))<<endl;
    }

    return 0;
}