#include <bits/stdc++.h>
using namespace std;
long long n, s, c, y, ans;
long long last = 0;
int main()
{
    cin >> n >> s;
    for(long long i = 1; i <= n; i++)
    {
        cin >> c >> y;
        if(i == 1) last = c;
        else last = min(last + s, c);
        ans += last * y;
    }
    cout << ans << endl;
    return 0;
}