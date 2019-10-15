#include <bits/stdc++.h>
using namespace std;
int m;
int now = 0;
int front = 1, last = 0;
int main()
{
    cin >> m;
    while(front != m)
    {
        if(now == m) cout << front << " " << last << endl;
        if(now < m)
        {
            now += last + 1;
            last++;
        }else
        {
            now -= front;
            front++;
        }
    }
    return 0;
}