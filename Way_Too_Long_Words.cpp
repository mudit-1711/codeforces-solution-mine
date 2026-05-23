#include <iostream>
#include <string>
using namespace std;
int main(){
    int i,j,t,n;
    string s;
    
    cin>>n;
    while(n--){
        string ans="";
        cin>>s;
        if(s.length()>10){
          int count =0;
          for(i=1;i<s.length()-1;i++){
            count++;
          }
       ans +=s[0];
       ans+=to_string(count);
       ans+=s[s.length()-1];
      cout<<ans<<endl;
        }else{
            cout<<s<<endl;
        }

    }

   return 0;
}