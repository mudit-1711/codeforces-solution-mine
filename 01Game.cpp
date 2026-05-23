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
    int i,j,t;
    //string s;
    cin>>t;
    while(t--){
       string s;
       cin>>s;
       int one =0;
       int zero =0;
       for(i=0;i<s.size();i++){
        if(s[i]=='0'){
            zero++;
        }else{
            one++;
        }
       }
       if((zero==0&&one!=0)||(zero!=0&&one==0)){
        cout<<"NET"<<endl;
        continue;
       }
       if((zero%2==0&&one>=zero)||(one%2==0&&one<=zero)){
            cout<<"NET"<<endl;
       }else{
        cout<<"DA"<<endl;
       }
    }

    return 0;
}