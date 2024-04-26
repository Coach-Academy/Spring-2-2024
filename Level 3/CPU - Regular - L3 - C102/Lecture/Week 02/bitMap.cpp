#include <bits/stdc++.h>

using namespace std;

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

int main() {
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        vector <string> grid(n);
        for (auto &i : grid) cin >> i;
        queue <pair<int, int>> q;
        vector <vector <int>> dist(n, vector <int> (m, -1));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == '1') {
                    q.push({i, j});
                    dist[i][j] = 0;
                }
            }
        }
        while(!q.empty()) {
            auto [x, y] = q.front(); q.pop();
            for (int i = 0; i < 4; i++) {
                int nx = x+dx[i], ny = y+dy[i];
                if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
                if (dist[nx][ny] != -1) continue;
                dist[nx][ny] = dist[x][y]+1;
                q.push({nx, ny});
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << dist[i][j] << ' ';
            }
            cout << '\n';
        }
    }
    return 0;
}
