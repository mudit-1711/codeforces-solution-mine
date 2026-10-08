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
    long long i,j=0,k,n;
    cin>>n>>k;
    vector<long long> v;
    for(i=1;i*i<=n;i++){
        if(n%i==0){
            v.push_back(i);
            if(i!=n/i){
                v.push_back(n/i);
            }
        }
    }
    sort(v.begin(),v.end());
    if(k<=v.size()){
        cout<<v[k-1];
    }
    else{
        cout<<-1;
    }

    return 0;
}