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
    int t,x,y,i,j,k;
    cin>>t;
    while(t--){
        cin>>x;
        vector<int>d;
        while(x>0){
            int digit = x%10;
            d.push_back(digit);
            x=x/10;
        }
        int y= *min_element(d.begin(),d.end());
        cout<<y<<endl;
    }

    return 0;
}