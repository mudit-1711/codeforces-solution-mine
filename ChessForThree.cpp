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
    int i,j,n;
    cin>>n;
    vector<int>a;
    while(n--){
        int x;
        cin>>x;
        a.push_back(x);
    }
    int s =3;
    for(i=0;i<a.size();i++){
        if(a[i]==s){
            cout<<"NO"<<endl;
            return 0;
        }
        s = 6-a[i]-s;
    }
    cout<<"YES"<<endl;


    return 0;
}