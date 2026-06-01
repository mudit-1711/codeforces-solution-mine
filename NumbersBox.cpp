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
    long long i,j,t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        long long neg =0;
        vector<long long>ne;
        long long sum=0;
        vector<vector<long long>>a(n,vector<long long>(m));
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cin>>a[i][j];
                if(a[i][j]<0){
                    neg++;
                }
                ne.push_back(abs(a[i][j]));
                sum+=abs(a[i][j]);
            }
        }
        if(neg%2==0){
            cout<<sum<<endl;
        }else{
            sort(ne.begin(),ne.end());
            cout<<(sum-2*(abs(ne[0])))<<endl;
        }
    }

    return 0;
}