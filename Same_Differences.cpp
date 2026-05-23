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
    long long t,i,j,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<long long>arr(n);
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        long long count=0;
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(i<j&&(arr[j]-arr[i]==j-i))count++;
            }
        }
        cout<<count<<endl;
    }

    return 0;
}