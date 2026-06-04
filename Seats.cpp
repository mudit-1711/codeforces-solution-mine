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
    int i,j,n,t;
    cin>>t;
    while(t--){
        cin>>n;
        string s;
        int zero=0;
        cin>>s;
        vector<int>pos;
        for(i=0;i<n;i++){
            if(s[i]=='1'){
                pos.push_back(i);
            }else{
                zero++;
            }
        }
        if(pos.empty()){
            cout << (n + 2) / 3 << endl;
            continue;
        }
        int ans = pos.size();
        int leftLen = max(0, pos[0] - 1);
        ans += (leftLen + 2) / 3;
        for (i = 1; i < pos.size(); i++) {
            int gap = pos[i] - pos[i - 1] - 1;
            gap -= 2;
            if (gap > 0) {
                ans += (gap + 2) / 3;
            }
        }
        int rightLen = max(0, n - pos.back() - 2);
        ans += (rightLen + 2) / 3;
        cout << ans << endl;
    }

    return 0;
}