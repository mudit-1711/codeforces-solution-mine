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
    int i,k,j,t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int>a(n);
        for(j=0;j<n;j++){
            cin>>a[j];
        }
        bool ok =false;
        for(j=1;j<n-1;j++){
             i=-1;
             k=-1;
            for(int l = 0;l<j;l++){
                if(a[l]<a[j]){
                    i=l;
                    break;
                }
            }
            for(int r = j+1;r<n;r++){
                if(a[r]<a[j]){
                    k=r;
                    break;
                }
            }
            if(i!=-1&&k!=-1){
                ok = true;
                break;
            }
        }
        if(ok){
            cout<<"YES"<<endl;
            cout<<i+1<<" "<<j+1<<" "<<k+1<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}