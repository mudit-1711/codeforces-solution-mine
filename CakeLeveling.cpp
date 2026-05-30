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
    long long i,j,k,n,t;
    cin>>t;
    while(t--){
        cin>>n;
        vector<long long>a(n);
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        long long sum=a[0];
        vector<long long>ans;
        ans.push_back(a[0]);
        vector<long long>temp;
        temp.push_back(a[0]);
        for(i=1;i<n;i++){
            sum+=a[i];
           long long curr= sum / (i + 1);
           ans.push_back(min(ans.back(), curr));
        }
        for(i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}