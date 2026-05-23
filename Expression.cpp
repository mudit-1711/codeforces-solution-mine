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
    int a,b,c;
    int m1,m2,m3,m4;
    cin>>a>>b>>c;
    m1=a+b+c;
    m2=a*b*c;
    m3=(a+b)*c;
    m4=a*(b+c);
    cout<<max(m1,max(m2,max(m3,m4)));


    return 0;
}