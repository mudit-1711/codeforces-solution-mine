#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cctype>
using namespace std;
int main() {
    int t,i,j,x,y,z;
    int xi=0,yi=0,zi=0;
    cin>>t;
    while(t--){
        cin>>x>>y>>z;
        xi=xi+x;
        yi=yi+y;
        zi=zi+z;
    }
    if(xi==0&&yi==0&&zi==0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}