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
    int i,j,n,k,t;
    cin>>t;
    while(t--){
        cin>>n;
        string s;
        cin>>s;
        if(n%2!=0){
            cout<<"NO"<<endl;
            continue;
        }
        int l =0;
        for(char c : s){
            if(c=='('){
                l++;
            }
        }
        if(l==n/2){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}