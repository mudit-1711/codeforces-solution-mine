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
bool isunique(int x){
    unordered_map<int,int> mpp;
    while(x>0){
        int d =x%10;
        mpp[d]++;
        x=x/10;
    }
    for(auto x : mpp){
        if(x.second>1){
            return false;
        }
    }
    return true;
}
int main() {
    int y;
    cin>>y;
    int i,j;
    for(i=y+1;i<=9012;i++){
        if(isunique(i)==true){
            cout<<i;
            return 0;
        }
    }

    return 0;
}