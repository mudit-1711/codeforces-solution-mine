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
    string s;
    cin>>s;
    if(s.size()==1){
        cout<<0;
        return 0;
    }
    long long sum=0;
    for(auto x : s){
        sum+=(x-'0');
    }
    if(sum<10){
        cout<<1<<endl;
        return 0;
    }
    long long a=0,c=1;
    while(sum>=10){
        string temp = to_string(sum);
         c++;
        for(auto x : temp){
            a+=(x-'0');
        }
        sum=a;
        a=0;
    }
    cout<<c<<endl;
    return 0;
}