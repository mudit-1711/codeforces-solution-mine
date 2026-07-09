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
    int i,j,t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int>a(n);
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        //int mx = a[n-1];
        int ans =0;
        bool no = false;
        for(i=n-2;i>=0;i--){
            if(a[i+1]>a[i]){
                continue;
            }else{
                while(a[i] >= a[i+1] && a[i] > 0){
                a[i] /= 2;
                ans++;
            }
            if(a[i] >= a[i+1]){
            no = true;
            break;
                }
            }
            if(no)break;
        }
        if(no){
            cout<<-1<<endl;
        }else{
               cout<<ans<<endl;
        }
    }

    return 0;
}