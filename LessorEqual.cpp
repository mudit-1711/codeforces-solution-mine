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
    int i,j,k,n,t;
    cin>>n>>k;
    vector<int>a(n);
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    if(k == 0) {
        if(a[0] == 1)
            cout << -1;
        else
            cout << 1;
    }
    else {
        int num = a[k - 1];

        int len = 0;

        for(i = 0; i < n; i++) {
            if(a[i] <= num) {
                len++;
            }
        }

        if(len == k) {
            cout << num;
        }
        else {
            cout << -1;
        }
    }


    return 0;
}