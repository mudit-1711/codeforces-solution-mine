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
    int i,j,k,t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int>a(n);
        int f1=-1,l1=-1;
        int fm1=-1,lm1=-1;
        for(i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1){
                if(f1==-1)f1=i;
                l1=i;
            }
            if(a[i]==-1){
                if(fm1==-1)fm1=i;
                lm1=i;
            }
        }
        if(f1==-1){
            if(fm1!=-1){
                a[fm1]=1;
                a[lm1]=1;
            }
        } else {
            if(fm1!=-1 && fm1<f1){
                a[fm1]=1;
            }
            if(lm1!=-1 && lm1>l1){
                a[lm1]=1;
            }
        }
        for(i=0;i<n;i++){
            if(a[i]==-1){
                a[i]=0;
            }
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}