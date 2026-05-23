#include<iostream>
#include<climits>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
long long  n,q,x,i,j,y,p;
       cin>>n>>q;
     vector<long long > pp(n);
       for(i=0;i<n;i++){
        cin>>pp[i];
       }
        sort(pp.begin(),pp.end());
        vector<long long > pref(n+1,0);
       for(i=0;i<n;i++){
        pref[i+1]=pref[i]+pp[i];
       }
       while(q--){
        cin>>x>>y;
        long long  ans =0;
        long long start = n-x;
        ans = pref[start+y]-pref[start];
        cout<<ans<<endl;
       }
 return 0;
}