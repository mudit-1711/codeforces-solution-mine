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
    
    int i,j,n,m,k;
    cin>>n>>m;
    vector<vector<int>>a(n,vector<int>(m));
    for(i=1;i<n;i++){
        for(j=0;j<m-1;j++){
            cin>>a[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i][j]==0){
                if(abs(a[i][j+1]-a[i-1][j])>1){
                    if(a[i][j+1]>a[i-1][j]){
                        a[i][j]=a[i][j+1]-1;
                    }else{
                        a[i][j]=a[i-1][j]+1;
                    }
                }else{
                    cout<<-1;
                    return 0;
                }
            }
        }
    }
    long long sum = 0;

    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {

            if(i > 0 && a[i][j] <= a[i - 1][j]) {
                cout << -1;
                return 0;
            }

            if(j > 0 && a[i][j] <= a[i][j - 1]) {
                cout << -1;
                return 0;
            }

            sum += a[i][j];
        }
    }

    cout << sum;

    return 0;
}