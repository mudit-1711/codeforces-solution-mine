#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<vector<char>> v(4, vector<char>(4));
    int i, j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            cin >> v[i][j];
        }
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {

            int black = 0;
            int white = 0;

            if (v[i][j] == '#') black++;
            else white++;

            if (v[i][j + 1] == '#') black++;
            else white++;

            if (v[i + 1][j] == '#') black++;
            else white++;

            if (v[i + 1][j + 1] == '#') black++;
            else white++;

            if (black >= 3 || white >= 3) {
                cout << "YES";
                return 0;
            }
        }
    }

    cout << "NO";

    return 0;
}