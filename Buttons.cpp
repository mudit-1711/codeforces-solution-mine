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
    int i,j,k,a,b,c,t;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        if(c%2==1){
            if(b>a){
                cout<<"Second"<<endl;
            }else{
                cout<<"First"<<endl;
            }
        }else{
             if(a>b){
                cout<<"First"<<endl;
            }else{
                cout<<"Second"<<endl;
            }
        }
    }

    return 0;
}