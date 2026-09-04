#include <bits/stdc++.h>
using namespace std;
int main() {
    int i,j,n,m,t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        vector<int>a(n);
        vector<int>freq(m+2,0);
        for(i=0;i<n;i++){
            cin>>a[i];
            freq[a[i]]++;
        }
       vector<int>pref(m+2,0);
       for(i=1;i<=m;i++){
        pref[i]=pref[i-1]+freq[i];
       }
        int ans =0;
        for(i=1;i<=m;i++){
            int c = freq[i]+(n-pref[i]);
            if(2*i<=m){
                c+=freq[2*i];
            }
            ans=max(ans,c);
        }
        cout<<ans<<endl;
    }

    return 0;
}