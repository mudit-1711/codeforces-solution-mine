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
    int i,j,k=0;
    int s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;
    vector<int> v {s1,s2,s3,s4};
    sort(v.begin(),v.end());
    for(i=0;i<3;i++){
       if(v[i]==v[i+1])k++;
    }
    if(k==0)cout<<0;
    if(k==1){
        cout<<1;
    }else if ( k==2){
        cout<<2;
    }else {
        cout<<3;
    }
    return 0;
}