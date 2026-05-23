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
bool islucky(int n){
    string s = to_string(n);
    for(auto x : s){
        if(x!='4'&&x!='7'){
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin>>n;
     for(int i = 1; i <= n; i++){
        if(islucky(i)==true && n%i==0){
            cout<<"YES";
            return 0;
        }
    }

    cout<<"NO";
    return 0;
}