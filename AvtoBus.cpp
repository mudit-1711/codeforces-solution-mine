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
    long long i,j,t,n,k;
    cin>>t;
    while(t--){
        cin>>n;
        long long mn,mx;
        if(n % 2 != 0 || n < 4){
            cout<<-1<<endl;
        }else{
            if(n%4==0&&n%6==0){
                mx = n/4;
                mn=n/6;
            }else if(n%4==0&&n%6!=0){
                    mx = n/4;
                    mn = (n/6)+1;
            }else if(n%4!=0&&n%6==0){
                    mx= n/4;
                    mn = n/6;
            }else{
                mx = n/4;
                mn = (n/6)+1;
            }
            cout<<mn<<" "<<mx<<endl;
        }
    }

    return 0;
}