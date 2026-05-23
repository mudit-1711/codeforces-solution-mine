#include <iostream>
using namespace std;
int main(){
int i,j,n,k;
cin>>n>>k;
int arr[n];
for(i=0;i<n;i++){
    cin>>arr[i];
}
int ans=0;
int kscore = arr[k-1];
for(i=0;i<n;i++){
    if(kscore<=arr[i]&&arr[i]>0)ans++;
}
cout<<ans;
    return 0;
}