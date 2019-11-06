#include <bits/stdc++.h>
using namespace std;
string a[100001], t;
int n;
int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    cin >> t;
    sort(a + 1, a + 1 + n);
    for(int i = 1; i <= n; i++)
    {
        if(a[i].find(t) == 0) cout << a[i] << endl;
    }
    return 0;
}