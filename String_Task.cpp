#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cctype>
using namespace std;
int main() {
    string s;
    cin>>s;
    string ans="";
    int i,j;
    for(i=0;i<s.size();i++){
        if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'
            &&s[i]!='u'&&s[i]!='A'&&s[i]!='E'&&s[i]!='I'
            &&s[i]!='O'&&s[i]!='U'&&s[i]!='y'&&s[i]!='Y'){
            ans+='.';
            ans+=tolower(s[i]);
            
        }
    }
    cout<<ans;
    return 0;
}