#include <bits/stdc++.h>
using namespace std;

int main() {
    int i,n,p,q;
    cin >> n;

    cin >> p;
    vector<int> num(n, 0);

    for(i = 0; i < p; i++){
        int x;
        cin >> x;
        num[x - 1] = 1;
    }

    cin >> q;
    for(i = 0; i < q; i++){
        int x;
        cin >> x;
        num[x - 1] = 1;
    }

    for(i = 0; i < n; i++){
        if(num[i] == 0){
            cout << "Oh, my keyboard!";
            return 0;
        }
    }

    cout << "I become the guy.";
    return 0;
}