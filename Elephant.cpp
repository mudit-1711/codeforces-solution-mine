#include <iostream>
using namespace std;
int main(){
    int i,j,x;
    cin>>x;
    if(x<=5){
        cout<<1;
        return 0;
    }
    if(x>=6&&x<=10){
        cout<<2;
        return 0;
    }
    cout<<(x+5-1)/5;


    return 0;
}