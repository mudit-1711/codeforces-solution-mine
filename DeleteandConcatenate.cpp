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
    long long i,j,n,c,t;
    cin>>t;
    while(t--){
        cin>>n>>c;
        vector<long long>a(n);
        for(i=0;i<n;i+=1){
            cin>>a[i];
        }
        long long ans =0;
        reverse(a.begin(),a.end());
        vector<long long>v(n);
        for(i=0;i<n;i++){
            ans+=(a[i]-c);
            v[i]=c-a[i];
        }
        sort(v.rbegin(),v.rend());
        long long mx = ans;
        for(i=0;i<n/2;i++){
            if(v[i]>0){
                mx+=v[i];
            }else{
                break;
            }
        }
        cout<<mx<<endl;
    }

    return 0;
}