#include <iostream>
#include <map>
using namespace std;

int main() {
    int i,j,t,n;
    cin>>t;

    while(t--){
        cin>>n;

        map<int,int> mpp;

        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                int x;
                cin>>x;
                mpp[x]++;
            }
        }

        int mx = 0;
        for(auto x : mpp){
            mx = max(mx, x.second);
        }

        if(mx > n*(n-1)) cout<<"NO\n";
        else cout<<"YES\n";
    }

    return 0;
}