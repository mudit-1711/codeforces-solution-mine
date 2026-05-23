// #include <iostream>
// #include <iomanip>
// #include <fstream>
// #include <sstream>
// #include <vector>
// #include <array>
// #include <deque>
// #include <list>
// #include <forward_list>
// #include <stack>
// #include <queue>
// #include <set>
// #include <map>
// #include <unordered_set>
// #include <unordered_map>
// #include <algorithm>
// #include <numeric>
// #include <utility>
// #include <functional>
// #include <string>
// #include <cstring>
// #include <cmath>
// #include <cstdlib>
// #include <ctime>
// #include <climits>
// #include <cfloat>
// #include <bitset>
// using namespace std;
// int main() {
//     //1 1 2 3 3 
//     int i,j,n;
//     cin>>n;
//     vector<int>b(n);
//     vector<int>ans;
//     for(i=0;i<n;i++){
//         cin>>b[i];
//     }
//     sort(b.begin(),b.end());
//     int mx = b[n-1]-b[0];
//     ans.push_back(mx);
//     long long count =0;
//     long long l =0,r=n-1;
//     if(mx==0){
//         cout<<0<<" "<<(1LL*n*(n-1)/2);
//         return 0;
//     }
//     long long c1=0,c2=0
//     // while(l<r){
//     //     if(b[r]-b[l]==mx){
//     //         long long cl=1,cr=1;
//     //         while(l+1<r&&b[l]==b[l+1])cl++,l++;
//     //         while(r-1>=0&&b[r]==b[r-1])cr++,r--;
//     //         count+=1LL*cl*cr;
//     //         l++;
//     //         r--;
//     //     }else if(b[r]-b[l]<mx){
//     //         r--;
//     //     }else{
//     //         l++;
//     //     }
//     // }
//     //     ans.push_back(count);
//     //     cout<<ans[0]<<" "<<ans[1];
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> b(n);
    for(int i = 0; i < n; i++) cin >> b[i];

    sort(b.begin(), b.end());

    long long mx = b[n-1] - b[0];

    // all equal
    if(mx == 0){
        cout << 0 << " " << (1LL * n * (n - 1) / 2);
        return 0;
    }

    long long c1 = 0, c2 = 0;

    for(int i = 0; i < n; i++){
        if(b[i] == b[0]) c1++;
        if(b[i] == b[n-1]) c2++;
    }

    cout << mx << " " << (c1 * c2);
}