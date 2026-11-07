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
        cin>>n>>k;
        vector<int>a(n);
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        if(k==n){
            cout<<"YES"<<endl;
            for(i=0;i<n;i++)cout<<a[i]<<" ";
            cout<<endl;
        }else{
            if(a[n-k-1]==a[n-1]){
                cout<<"NO"<<endl;
            }else{
                cout<<"YES"<<endl;
                for(i=n-k;i<n;i++)cout<<a[i]<<" ";
                for(i=n-k-1;i>=0;i--){
                    cout<<a[i]<<" ";
                }
                cout<<endl;
            }
        }
    }

    return 0;
}