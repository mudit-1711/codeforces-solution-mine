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
    int one=0,two=0,three=0,four=0;
    vector<int>arr(n);
    for(i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==1)one++;
        else if(arr[i]==2)two++;
        else if(arr[i]==3)three++;
        else four++;
    }
       int car =0;
       car+=four;
       if(three<=one){
        car+=three;
        one=one-three;
       }else{
        car+=three;
        one=0;
       }
       if(two%2==0){
        car+=two/2;
       }else {
        car+=two/2;
        car+=1;
        if(one>=2){
            one-=2;
        }else{
            one=0;
        }
       }
       car+=one/4;
       if(one%4!=0){
        car+=1;
       }
    cout<<car;
    return 0;
}