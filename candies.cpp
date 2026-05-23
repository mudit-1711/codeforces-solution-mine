#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;

        long long p = 2;

        for(int k = 2; k <= 31; k++){
            p *= 2; 
            long long d = p - 1;

            if(n % d == 0){
                cout << n / d << "\n";
                break;
            }
        }
    }
}