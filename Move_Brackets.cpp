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
    
    int i,j,k,t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int count=0;
        string s;
        cin>>s;
        stack<char>st;
        for(i=0;i<s.size();i++){
           if(s[i] == '('){
                st.push('(');
            }
            else{
                if(!st.empty()&&st.top()=='('){
                    st.pop();
                }else{
                    count++; 
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}