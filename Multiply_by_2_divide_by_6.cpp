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
    long long t,n,a;
    cin>>t;
    while(t--){
        cin>>n;
        a=0;
        while(n!=1){
            if(n%6==0){
                n=n/6;

            }else if (n%3==0){
                n=n*2;
            }else{
                a=-1;
                break;
            }
            a++;
        }
        cout<<a<<endl;
    }

    return 0;
}