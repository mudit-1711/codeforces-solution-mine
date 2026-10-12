
#include <bits/stdc++.h>
using namespace std;

int main() {
    int i,j,t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> ans;
        n--;
        int msb=log2(n);
        int num=pow(2,msb)-1;
        while(num>=0){
            ans.push_back(num);
            num--;
        }
        num=pow(2,msb);
        while(num<=n){
            ans.push_back(num);
            num++;
        }
        for(auto x:ans){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}
