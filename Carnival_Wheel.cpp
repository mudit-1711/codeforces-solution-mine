#include <iostream>
using namespace std;
int main(){
    int i,j,t,l,a,b,prize;
    cin>>t;
    while(t--){
        cin>>l>>a>>b;
        int cur =a;
        int ans =a;
        for(i=0;i<l;i++){
            ans=max(ans,cur);
            cur=(cur+b)%l;
        }
        cout<<ans<<endl;
    }


    return 0;
}