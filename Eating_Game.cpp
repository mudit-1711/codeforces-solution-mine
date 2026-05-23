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
    int i,j,t,n,k;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int>arr(n);
         int maxi =-1;
        unordered_map<int,int>mpp;
        for(i=0;i<n;i++){
            cin>>arr[i];
            mpp[arr[i]]++;
            if(arr[i]>maxi){
                maxi=arr[i];
            }
        }
        int ma = mpp[maxi];
      cout<<ma<<endl;
    }

    return 0;
}