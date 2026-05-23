#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cctype>
using namespace std;
int main() {
    long long n;
  long long seven =0;
  long long four =0;
    cin>>n;
   while(n>0){
    long long d = n%10;
    if(d==7){
        seven++;
    }else if(d==4){
        four++;
    }
    n=n/10;
   }
   if(seven+four==7||seven+four==4){
    cout<<"YES";
   }else{
    cout<<"NO";
   }

    return 0;
}