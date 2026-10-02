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
    unsigned long long i,j,t,n,c;
    cin>>t;
    while(t--){
        cin>>n;
        vector<unsigned long long>ans;
        c = 10;
        for(i = 1; i <= 18; i++) {
            if(n >= c + 1 && n % (c + 1) == 0) {
                ans.push_back(n / (c + 1));
            }
            if(i < 18) {
                c *= 10;
            }
        }
        sort(ans.begin(), ans.end());
        if(ans.empty()) {
            cout << 0 << "\n";
        } else {
            cout << ans.size();
            for(j = 0; j < ans.size(); j++) {
                cout << " " << ans[j];
            }
            cout << "\n";
        }
    }
    return 0;
}