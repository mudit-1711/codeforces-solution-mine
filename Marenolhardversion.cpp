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
    long long i,j,t,n;
    cin>>t;
    while(t--){
        cin>>n;
        string a,b;
        cin>>a>>b;
        vector<long long>ae,ao,be,bo;
        long long ie=0,io=0;
        for(i=0;i<n;i++){
            if(i%2==0){
                if(a[i]=='1')ae.push_back(ie);
                if(b[i]=='1')be.push_back(ie);
                ie++;
            }else{
                if(a[i]=='1')ao.push_back(io);
                if(b[i]=='1')bo.push_back(io);
                io++;
            }
        }
        if(ae.size()!=be.size()||ao.size()!=bo.size()){
            cout<<-1<<endl;
        }else{
            long long ans =0;
            for(i=0;i<ae.size();i++){
                ans+=abs(ae[i]-be[i]);
            }
            for(i=0;i<ao.size();i++){
                ans+=abs(ao[i]-bo[i]);
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}