#include <iostream>
#include <string>
using namespace std;
int main(){
     int one =0;
     int two=0;
     int three=0;
     string s;
     cin>>s;
     for(auto x : s){
        if(x=='1'){
            one++;
        }else if (x=='2'){
            two++;
        }else if(x=='3'){
            three++;
        }
     }
    string ans ="";
    while(one!=0){
        ans+='1';
        ans+='+';
        one--;
    }
     while(two!=0){
        ans+='2';
        ans+='+';
        two--;
    }
     while(three!=0){
        ans+='3';
        ans+='+';
        three--;
    }
    ans.pop_back();
    cout<<ans;
    return 0;
}