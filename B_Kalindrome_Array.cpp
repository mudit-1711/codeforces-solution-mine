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

bool ispalindorme(vector<int>&a,int x){
    vector<int>b;
    for(int i = 0;i<a.size();i++){
        if(a[i]!=x)
            b.push_back(a[i]);
    }
    for(int i = 0;i<b.size();i++){
        if(b[i]!=b[b.size()-i-1])
            return false;
    }
    return true;
}
int main() {
    int i,j,t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int>a(n);
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        bool ok = true;
        for(i=0;i<n;i++){
            if(a[i]!=a[n-i-1]){
                ok = ispalindorme(a,a[i]) || ispalindorme(a,a[n-i-1]);
                break;
            }
        }
        if(ok){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}