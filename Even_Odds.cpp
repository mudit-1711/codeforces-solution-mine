#include <iostream>
#include <vector>
using namespace std;
int main(){
       long long n,k;
       cin>>n>>k;
       long long  odd = (n+1)/2;
       if(k<=odd){
        cout<<2*k-1;
       }else{
        cout<<2*(k-odd);
       }
    return 0;
}