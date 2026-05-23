#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
     int i,j,t,n;
     cin>>t;
     while(t--){
        cin>>n;
        vector<int> ans(n);
        for(i=0;i<n;i++){
            ans[i]=i+1;
        }
        for (int i = 0; i + 1 < n; i += 2)
            swap(ans[i], ans[i + 1]);

        for(i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
     }


    return 0;
}