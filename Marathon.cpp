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
    int a,b,c,d,t;
 cin>>t;
 while(t--){
    cin>>a>>b>>c>>d;
    int count=0;
    if(a<b)count++;
    if(a<c)count++;
    if(a<d)count++;
    cout<<count<<endl;

 }

    return 0;
}