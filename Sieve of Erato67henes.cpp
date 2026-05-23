#include <iostream>
using namespace std;
int main(){
  int t,i,j,n;
  cin>>t;
  while(t--){
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    bool found1 = false;
    bool found67 = false;
  for(i=0;i<n;i++){
    if(arr[i]==1){
        found1 = true;
    }
    if(arr[i]==67){
        found67=true;
    }
  }
    if(found1&&found67){
        cout<<"YES"<<endl;
    }else if(found67){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    }
  


    return 0;
}