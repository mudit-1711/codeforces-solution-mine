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
bool prime(long long n){
    if(n < 2) return false;
    for(long long i = 2; i * i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}
bool tprime(long long  n){
    long long s = sqrt(n);
    if(s*s!=n)return false;
    if(prime(s))return true;
    return false;
}
int main() {
    long long i,j,n;
    cin>>n;
    vector<long long >arr(n);
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        if(tprime(arr[i])==true){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}