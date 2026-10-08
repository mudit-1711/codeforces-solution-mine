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
    int i,j,t,a,b; 
    cin>>t; 
    while(t--){ 
        cin>>a>>b; 

        long long n=a-1;
        long long xo;

        long long x=n%4;

        if(x==0)
            xo=n;
        else if(x==1)
            xo=1;
        else if(x==2)
            xo=n+1;
        else
            xo=0;

        if(xo==b){ 
            cout<<a<<endl; 
        }else if((xo^b)!=a){ 
            cout<<a+1<<endl; 
        }else{ 
            cout<<a+2<<endl; 
        } 
    } 
 
    return 0; 
}