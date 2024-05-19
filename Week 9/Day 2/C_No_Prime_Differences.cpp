#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fl float
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll a[n + 1][m + 1];
        ll x = 1;
        for (ll i = 1; i <= n; i++)
        {
            for (ll j = 1; j <= m; j++)
            {
                a[i][j] = x++;
            }
        }
        for (int i = 2; i <= n; i += 2)
        {
            for (int j = 1; j <= m; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
        for (int i = 1; i <= n; i += 2)
        {
            for (int j = 1; j <= m; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}