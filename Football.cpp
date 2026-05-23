#include <iostream>
#include <string>
using namespace std;
int main(){
     int i;
     int count =1;
     string s;
     cin>>s;
     for(i=1;i<s.length();i++){
        if(s[i]==s[i-1]){
            count++;
            if(count>=7){
                cout<<"YES";
                return 0;
            }
        }else{
            count =1;
        }
     }
      cout<<"NO";
    return 0;
}