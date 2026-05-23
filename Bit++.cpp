#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i, j, n, k;
    int ans = 0;
    cin >> n;
    string s;
    while (n--)
    {
        cin >> s;
        if (s[1] == '+')
        {
            ans++;
        }
        else
        {
            ans--;
        }
       
    }
     cout << ans;
    return 0;
}