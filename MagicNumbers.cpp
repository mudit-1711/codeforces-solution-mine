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
   int i = 0;

    while (i < s.size()) {
        if (s.substr(i, 3) == "144") {
            i += 3;
        }
        else if (s.substr(i, 2) == "14") {
            i += 2;
        }
        else if (s.substr(i, 1) == "1") {
            i += 1;
        }
        else {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";


    return 0;
}