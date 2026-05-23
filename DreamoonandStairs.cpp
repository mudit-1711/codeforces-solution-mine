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
    int n,m,i,j,k;
    cin>>n>>m;
    if(m>n){
        cout<<-1;
        return 0;
    }
    int move =0;
    int curr=0;
    while(curr<n){
        move++;
        curr++;
        if(curr<n)curr++;
    }
    while(move%m!=0){
        move++;
    }
cout<<move;
    return 0;
}