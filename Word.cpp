#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cctype>
using namespace std;
int main() {
    int i,j;
    int upper=0,lower=0;
    string s;
    cin>>s;
    for(char x : s){
        if(x>='a'&&x<='z'){
            lower++;
        }else{
            upper++;
        }
    }
    if(lower>=upper){
        for(i=0;i<s.size();i++){
            s[i]=tolower(s[i]);
        }
    }else{
        for(i=0;i<s.size();i++){
            s[i]=toupper(s[i]);
        }
    }
    cout<<s;
    return 0;
}