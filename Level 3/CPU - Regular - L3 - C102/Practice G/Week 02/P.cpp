#include <bits/stdc++.h>

using namespace std;

#define X first
#define Y second

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

int main() {
    int n, m;
    while(cin >> n >> m, n != -1) {
        pair<int, int> st;
        vector <vector <char>> grid(n, vector <char> (m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
                if (grid[i][j] == 'H') st = {i, j};
            }
        }

        queue <pair<int, pair<int, int>>> q;
        q.push({0, st});
        vector <vector <int>> dist[2];
        for (auto &i : dist) i.assign(n, vector <int> (m, 2e9));
        dist[0][st.X][st.Y] = 0;
        while(!q.empty()) {
            auto [state, cur] = q.front(); q.pop();
            for (int i = 0; i < 4; i++) {
                int nx = cur.X+dx[i], ny = cur.Y+dy[i];
                if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
                if (grid[nx][ny] == 'W' || (grid[nx][ny] == 'D' && state == 0)) continue;
                int newState = state;
                if (grid[nx][ny] == 'O') newState = 1;
                if (grid[nx][ny] == 'C') newState = 0;
                if (dist[newState][nx][ny] != 2e9) continue;
                dist[newState][nx][ny] = dist[state][cur.X][cur.Y]+1;
                q.push({newState, {nx, ny}});
            }
        }
        int ans = 2e9;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (i == 0 || i == n-1 || j == 0 || j == m-1) {
                    ans = min(ans, min(dist[0][i][j], dist[1][i][j]));
                }
            }
        }
        if (ans > 1e9) ans = -2;
        cout << ans+1 << '\n';
    }
    return 0;
}
