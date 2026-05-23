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
    int n;
    cin>>n;
    //1-8 2-4 3-2 4-6 // 8-5 4-6
    if(n==0){
cout<<1;
return 0;
    }
    if(n%4==0){
        cout<<6;
    }else if(n%4==3){
        cout<<2;
    }else if(n%4==2){
        cout<<4;
    }else{
        cout<<8;
    }

    return 0;
}