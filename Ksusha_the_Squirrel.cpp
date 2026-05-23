#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
       int i,j,n,k;
       int maxreach = 0;
       cin>>n>>k;
       string s;
       cin>>s;
       for(i=0;i<n;i++){
        if(i>maxreach){
            cout<<"NO";
            return 0;
        }
        if(s[i]=='.'){
            maxreach = max(maxreach,i+k);
        }
       }
       if(maxreach>=n-1){
        cout<<"YES";
       }else{
        cout<<"NO";
       }

    return 0;
}