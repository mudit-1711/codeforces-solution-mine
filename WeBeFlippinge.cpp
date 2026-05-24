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
        long long flip=0;
        vector<long long>ans;
        for(i=n-1;i>=0;i--){
            long long curr = a[i];
             if(flip%2!=0){
                curr=-curr;
            }
            if(curr>0){
                ans.push_back(i+1);
                flip++;
            }
        }
            cout<<ans.size()<<endl;
            for(i=0;i<ans.size();i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
    }

    return 0;
}