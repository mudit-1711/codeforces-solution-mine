#include <iostream>
#include<algorithm>
#include <string>
using namespace std;
int main(){
    int t,i,j,n;
    string a ,b;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>a>>b;
        if(a.length()!=b.length()){
            cout<<"NO"<<endl;
            continue;
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        bool ok =true;
        for(i=0;i<n;i++){
            if(a[i]!=b[i]){
                ok=false;
                break;
            }
        }
        if(ok==true){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }



    return 0;
}