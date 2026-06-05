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
    int l = 0,r=s.size()-1,ans=0;
    while(l<r){
        if(s[l]==s[r]){
            l++;
            r--;
        }else{
            ans++;
            l++;
            r--;
        }
    }
    if(ans==0&&s.size()%2==1){
        cout<<"YES"<<endl;
        return 0;
    }
    if(ans==1){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}