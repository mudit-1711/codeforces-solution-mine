#include <iostream>
using namespace std;
int main(){
    int i,j,k,t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n%2!=0){
            cout<<0<<endl;
            continue;
        }
        cout<<(n/4)+1<<endl;
    }
}