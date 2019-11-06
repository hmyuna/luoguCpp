#include <bits/stdc++.h>
using namespace std;
long long n, _;
long long ans = 0;
priority_queue<long long, vector<long long>, greater<long long> > a;
int main()
{
    cin >> n;
    for(long long i = 1; i <= n; i++)
    {
        cin >> _;
        a.push(_);
    }
    for(long long i = 1; i < n; i++)
    {
        long long fir, sec;
        fir = a.top();
        a.pop();
        sec = a.top();
        a.pop();
        ans += fir + sec;
        a.push(fir + sec);
        //cerr << ans << endl;
    }
    cout << ans << endl;
    return 0;
}