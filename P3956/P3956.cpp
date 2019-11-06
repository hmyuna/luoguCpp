#include <bits/stdc++.h>
using namespace std;
// white = 0, red = 1, yellow = 2
struct Node
{
    int x, y, ans;
    int color;
};
int dx[5] = {0, 1, -1, 0, 0};
int dy[5] = {0, 0, 0, 1, -1};
int n, m, Map[101][101], ans = -1;
queue<Node> q;
bool visited[101][101];
int main()
{
    cin >> m >> n;
    memset(visited, 0, sizeof(visited));
    memset(Map, 0, sizeof(Map));
    for (int i = 1; i <= n; i++)
    {
        int x, y, c;
        cin >> x >> y >> c;
        Map[x][y] = (c + 1) % 3;
    }
    Node Start;
    Start.x = 1, Start.y = 1, Start.ans = 0, Start.color = Map[1][1];
    q.push(Start);
    visited[1][1] = 1;
    while (!q.empty())
    {
        Node u = q.front();
        q.pop();
        if (u.x == m && u.y == m)
        {
            if (ans == -1)
                ans = u.ans;
            else
                ans = min(ans, u.ans);
        }
        for (int i = 1; i <= 4; i++)
        {
            Node v;
            v.x = u.x + dx[i];
            v.y = u.y + dy[i];
            v.color = Map[v.x][v.y];
            if (v.x < 0 || v.x > m || v.y < 0 || v.y > m || visited[v.x][v.y] || (ans != -1 && v.ans > ans))
                continue;
            if(v.color != 0)
            {
                if(v.color == u.color)
                {
                    v.ans = u.ans;
                    visited[v.x][v.y] = 1;
                    q.push(v);
                }else
                {
                    v.ans = u.ans + 1;
                    visited[v.x][v.y] = 1;
                    q.push(v);
                }
            }
            else if (v.color == 0 && Map[u.x][u.y] == 0)
            {
                continue;
            }
            else if(v.color == 0)
            {
                v.color = u.color;
                v.ans = u.ans + 2;
                visited[v.x][v.y] = 1;
                q.push(v);
            }
        }
    }
    cout << ans << endl;
    return 0;
}