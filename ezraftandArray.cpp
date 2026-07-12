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
        if(n==1){
            cout<<1<<endl;
            continue;
        }
        if(n==2){
            cout<<-1<<endl;
            continue;
        }
        vector<long long>v;
        v.push_back(1);
        v.push_back(2);
        v.push_back(3);
        long long sum=6;
        for(i=3;i<n;i++){
            v.push_back(sum);//1 2 3 6 12 24
            sum*=2;
        }
        for(i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}