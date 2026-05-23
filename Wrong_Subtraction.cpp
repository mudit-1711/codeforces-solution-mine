#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cctype>
using namespace std;
int main() {
    int i,j,n,k;
    cin>>n>>k;
    string s= to_string(n);
    while(k!=0){
        if(s.back()!='0'){
            s.back()=s.back() -1;
        }else{
            s.pop_back();
        }
        k--;
    }
    cout<<s;
    return 0;
}