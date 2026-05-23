#include <iostream>
#include <set>
#include <string>
using namespace std;
int main(){
     int i,j;
     string s;
     cin>>s;
     set<char>st;
     for(i=0;i<s.length();i++){
        st.insert(s[i]);
     }
       if(st.size()%2==1){
        cout<<"IGNORE HIM!";
       }else{
        cout<<"CHAT WITH HER!";
       }

    return 0;
}