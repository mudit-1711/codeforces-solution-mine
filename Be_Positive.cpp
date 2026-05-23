#include <iostream>
using namespace std;
int main(){
     int i,j,n,t;
     cin>>t;
     while(t--){
        cin>>n;
        int arr[n];
        int neg=0,zero=0;
        for(i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]<0){
                neg++;
            }else if(arr[i]==0){
                zero++;
            }
        }
        neg=neg%2;
        cout<<zero+2*neg<<endl;
     }

    return 0;
}