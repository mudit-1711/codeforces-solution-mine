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
    char ch;
    cin>>ch;
    string s;
    cin>>s;
    string key = "qwertyuiopasdfghjkl;zxcvbnm,./";
   // string ans="";
    for(char c : s){
        int i = key.find(c);
        if(ch=='R'){
            cout<<key[i-1];
        }else{
            cout<<key[i+1];
        }
    }
    return 0;
}