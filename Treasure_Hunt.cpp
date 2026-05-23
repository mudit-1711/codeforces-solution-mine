#include <iostream>
using namespace std;
int main(){
   long long t,x,y,a;
   cin>>t;
   while(t--){
    cin>>x>>y>>a;
    long long cycle =x+y;
    long long rem = (a+1)%cycle;
    if(rem<=x&&rem!=0){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
   }

    return 0;
}