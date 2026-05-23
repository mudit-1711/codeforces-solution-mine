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
    int i,j,k,n,t;
    cin>>t;
    while(t--){
        cin>>n;
        int count =0;
        vector<int>a(n);
        for(i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==2)count++;
        }
        if(count%2==1){
            cout<<-1<<endl;
            continue;
        }
        if(count==0){
            cout<<1<<endl;
            continue;
        }
        int need = count/2;
        int curr=0;
        for(i=0;i<n;i++){
            if(a[i]==2){
                curr++;
            }
            if(curr==need){
                cout<<i+1<<endl;
                break;
            }
        }
      
    }

    return 0;
}