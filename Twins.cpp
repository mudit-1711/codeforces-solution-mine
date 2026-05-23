#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int i,n;
    cin>>n;
     vector<int>vt(n);
     for(i=0;i<n;i++){
        cin>>vt[i];
     }
     sort(vt.begin(),vt.end());
     int total=0;
     for(i=0;i<n;i++){
        total+=vt[i];
     }
     int coin=0;
     int amountbig=0;
     int j=n-1;
     while(amountbig<=total-amountbig){
        amountbig+=vt[j];
        coin++;
        j--;
     }
     cout<<coin;
    return 0;
}