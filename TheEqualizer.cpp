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
        int sum=0;
        for(i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        if(sum % 2 == 1 || (n*k)%2==0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }


    }

    return 0;
}