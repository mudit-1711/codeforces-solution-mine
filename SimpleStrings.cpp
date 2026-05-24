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
    int i,j,k,n;
    string s;
    cin>>s;
    n=s.size();
    string ans ="";
    ans+=s[0];
    for(i=1;i<s.size();i++){
        if(s[i]==ans[i-1]){
            for(char j='a';j<='z';j++){
                if(j!=s[i-1]){
                    if(i<n-1&&j!=s[i+1]){
                        ans+=j;
                        break;
                    }else if(i==n-1){
                    ans+=j;
                    break;
                 }
                }
            }
        }else{
            ans+=s[i];
        }
    }
    cout<<ans;

    return 0;
}