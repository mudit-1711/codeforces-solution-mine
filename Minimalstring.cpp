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
    int i,j,k;
    string s ;
    cin>>s;
    string u ="";
    stack<char>t;
    vector<char>mn(s.size());
    mn[s.size()-1]=s[s.size()-1];
    for(i=s.size()-2;i>=0;i--){
        mn[i]=min(s[i],mn[i+1]);
    }
    for(i=0;i<s.size();i++){
        t.push(s[i]);
        while(!t.empty()&&((i==s.size()-1)||t.top()<=mn[i+1])){
            u.push_back(t.top());
            t.pop();
        }
    }
    while(!t.empty()){
        u.push_back(t.top());
        t.pop();
    }
    cout<<u;
    return 0;
}