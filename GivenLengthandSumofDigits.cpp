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
    int m,s,i,j;
    cin>>m>>s;
    if((s==0&&m>1)||s>9*m){
        cout<<-1<<" "<<-1;
        return 0;
    }
    if (m == 1 && s == 0) {
        cout << 0 << " " << 0;
        return 0;
    }
    string mn="",mx="";
    int sum=s;
    for(i=0;i<m;i++){
        int d = min(9,sum);
        mx+=(d+'0');
        sum-=d;
    }
    sum = s;
    for(i=0;i<m;i++){
        for(int d =(i==0?1:0);d<=9;d++){
            int rem = sum-d;
            int p = m-i-1;
            if(rem>=0&&rem<=9*p){
                mn+=(d+'0');
                sum-=d;
                break;
            }
        }
    }
    cout<<mn<<" "<<mx;
    return 0;
}//3 2 2 2 2 1 1 1 1 1 1 1 