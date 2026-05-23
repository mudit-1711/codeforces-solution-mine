#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
        int i,j,n;
        string s;
        cin>>n;
        cin>>s;
        int count=0;
        for(i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                count++;
            }
        }
  cout<<count;

    return 0;
}