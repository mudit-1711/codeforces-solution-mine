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
    int i,j,k,n,t;
    cin>>t;
    while(t--){
        cin>>n;
        map<int,int>mpp;
        vector<int>b(n);
        for(i=0;i<n;i++){
            cin>>b[i];
            mpp[b[i]]++;
        }
        if(mpp.size()==1){
            cout<<"YES"<<endl;
        }else if(mpp.size()==2){
            auto it = mpp.begin();
            int val1 = it->second;
            it++;
            int val2 = it->second;
            if(abs(val1-val2)<=1){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}