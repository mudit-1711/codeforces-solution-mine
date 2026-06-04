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
bool isPerfectSquare(long long x){
    if(x < 0){
        return false;
    }
    long long y = sqrt(x);
    return (y * y == x);
}
int main() {
    int i,j,n;
    cin>>n;
    vector<int>pos;
    vector<int>neg;
    for(i=0;i<n;i++){
        int x;
        cin>>x;
        if(x>=0){
            pos.push_back(x);
        }else{
            neg.push_back(x);
        }
    }
    sort(pos.rbegin(),pos.rend());
    sort(neg.rbegin(),neg.rend());
    for(i=0;i<pos.size();i++){
        if(!isPerfectSquare(pos[i])){
            cout<<pos[i]<<endl;
            return 0;
        }
    }
    cout<<neg[0];

    return 0;
}