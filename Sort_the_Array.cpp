#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n), b(n);

    for(int i=0;i<n;i++){
        cin >> arr[i];
        b[i] = arr[i];
    }

    sort(b.begin(), b.end());

    int l=-1, r=-1;

    for(int i=0;i<n;i++){
        if(arr[i] != b[i]){
            if(l==-1) l=i;
            r=i;
        }
    }

    if(l==-1){
        cout<<"yes\n1 1";
        return 0;
    }

    reverse(arr.begin()+l, arr.begin()+r+1);

    if(arr==b)
        cout<<"yes\n"<<l+1<<" "<<r+1;
    else
        cout<<"no";
}