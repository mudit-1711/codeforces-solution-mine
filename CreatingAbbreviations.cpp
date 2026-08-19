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
    int i, j, t, n, m;
    cin >> t;
    while(t--) {
        cin >> n >> m;
        vector<string> w, a;
        while(n--) {
            string temp;
            cin >> temp;
            w.push_back(temp);
        }
        while(m--) {
            string temp;
            cin >> temp;
            a.push_back(temp);
        }
        set<char> avl;
        for(i = 0; i < w.size(); i++) {
            avl.insert(w[i][0] - 'a' + 'A');
        }
        vector<bool> ok(a.size(), false);
        int cnt = 0;
        while(true) {
            bool change = false;
            for(i = 0; i < a.size(); i++) {
                if(ok[i])
                    continue;
                bool p = true;
                for(j = 0; j < a[i].size(); j++) {
                    if(avl.find(a[i][j]) == avl.end()) {
                        p = false;
                        break;
                    }
                }
                if(p) {
                    ok[i] = true;
                    cnt++;
                    avl.insert(a[i][0]);
                    change = true;
                }
            }
            if(!change)
                break;
        }
        if(cnt == a.size())
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}