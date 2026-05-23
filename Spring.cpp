#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll lcm_ll(ll a,ll b){
    return a / __gcd(a,b) * b;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        ll a,b,c,m;
        cin >> a >> b >> c >> m;

        ll A = m/a;
        ll B = m/b;
        ll C = m/c;

        ll ab = lcm_ll(a,b);
        ll ac = lcm_ll(a,c);
        ll bc = lcm_ll(b,c);
        ll abc = lcm_ll(a,lcm_ll(b,c));

        ll AB = m/ab;
        ll AC = m/ac;
        ll BC = m/bc;
        ll ABC = m/abc;

        ll onlyA = A - AB - AC + ABC;
        ll onlyB = B - AB - BC + ABC;
        ll onlyC = C - AC - BC + ABC;

        ll onlyAB = AB - ABC;
        ll onlyAC = AC - ABC;
        ll onlyBC = BC - ABC;

        ll alice = onlyA*6 + onlyAB*3 + onlyAC*3 + ABC*2;
        ll bob   = onlyB*6 + onlyAB*3 + onlyBC*3 + ABC*2;
        ll carol = onlyC*6 + onlyAC*3 + onlyBC*3 + ABC*2;

        cout << alice << " " << bob << " " << carol << "\n";
    }
}