#include <iostream>
#include <string>
using namespace std;
int main(){
    int t,i;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        string ans="";
        ans+=s[0];
        for(i=1;i<s.length()-1;i++){
            if(s[i] ==' '){
         ans+=s[i+1];
            }
        }
        cout<<ans<<endl;
    }
}