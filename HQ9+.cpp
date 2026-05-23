#include <iostream>
#include <string>
using namespace std;
int main(){
     string p;
     cin>>p;
     bool found =false;
     int i,j;
     for(i=0;i<p.size();i++){
        if(p[i]=='H'||p[i]=='Q'||p[i]=='9'){
            found = true;
            break;
        }
     }
     if(found){
        cout<<"YES";
     }else{
        cout<<"NO";
     }
    return 0;
}