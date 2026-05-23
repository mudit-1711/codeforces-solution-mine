#include <iostream>
using namespace std;
int main(){
long long a,b,w=0,d=0,s=1; int c=0;
int t;
cin>>t;
while(t--){
    cin>>a>>b;
    while(true){
        if(w+s<=a){ w+=s; c++; s*=2; }
        else break;
        if(d+s<=b){ d+=s; c++; s*=2; }
        else break;
    }
    cout<<c;
}
    return 0;
}