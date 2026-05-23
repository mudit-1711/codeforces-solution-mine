#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k, p, m;
        cin >> n >> k >> p >> m;

        deque<pair<int,bool>> dq;
        for (int i = 1; i <= n; i++) {
            int x;
            cin >> x;
            dq.push_back({x, i == p});
        }

        int ans = 0;

        while (true) {
            int pos = -1;
            for (int i = 0; i < dq.size(); i++)
                if (dq[i].second) pos = i;

            int choose = -1;

            if (pos < k) {
                choose = pos;
            } else {
                int best = INT_MAX;
                for (int i = 0; i < k; i++) {
                    if (dq[i].first < best) {
                        best = dq[i].first;
                        choose = i;
                    }
                }
            }

            int cost = dq[choose].first;
            if (cost > m) break;

            m -= cost;

            auto card = dq[choose];
            dq.erase(dq.begin() + choose);
            dq.push_back(card);

            if (card.second) ans++;
        }

        cout << ans << "\n";
    }
}