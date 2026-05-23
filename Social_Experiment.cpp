#include <iostream>
using namespace std;
int main(){
     int t,i,j,n;
     cin>>t;
     while(t--){
        cin>>n;
        int totalteam;
       if(n==2){
        cout<<2<<endl;
       }else if(n%2==0){
        cout<<0<<endl;
       }else if(n==3){
        cout<<3<<endl;
       }else{
        cout<<1<<endl;
       }
        
     }

    return 0;
}