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
    int i,j,n,t;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int>a(n);
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int mx=a[n-1];
        int mn=a[0];
        if(mn==mx){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
            cout<<mx<<" ";
            for(i=0;i<n-1;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}