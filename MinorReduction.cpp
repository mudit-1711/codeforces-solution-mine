#include <iostream>
#include <string>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {

        string x;
        cin >> x;

        int maxi = -1;
        int pos = -1;

        for (int i = 1; i < x.size(); i++) {

            int sum = (x[i] - '0') + (x[i - 1] - '0');

            if (sum >= 10) {
                maxi = sum;
                pos = i - 1;
            }
        }
        if (pos == -1) {

            maxi = (x[0] - '0') + (x[1] - '0');
            pos = 0;
        }

        string ans = "";

        for (int i = 0; i < x.size(); i++) {

            if (i == pos) {
                ans += to_string(maxi);
                i++;
            }
            else {
                ans += x[i];
            }
        }

        cout << ans << endl;
    }

    return 0;
}