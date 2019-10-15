#include <bits/stdc++.h>
using namespace std;
int visited[2001];
int now = 0;
int front = 1, last = 0;
int n, m;
int Q[1000001];
int bestFront, bestLast, bestLength = 1000001;
int main()
{
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        cin >> Q[i];
    }
    while(front <= n)
    {
        if(now < m){
            last++;
            if(visited[Q[last]] == 0)
            {
                visited[Q[last]]++;
                now++;
            }else
            {
                visited[Q[last]]++;
            }
            continue;
        }
        if(now == m)
        {
            while(visited[Q[front]] != 1)
            {
                front++;
            }
        }
        cout << front << " " << last << endl;
        return 0;
    }
    return 0;
}