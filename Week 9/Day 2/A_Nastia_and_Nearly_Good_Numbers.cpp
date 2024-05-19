#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fl float
using namespace std;
ll lmc(ll a, ll b)
{
    return ((a / __gcd(a, b)) * b);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        if (b == 1)
        {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        // cout << x << " " << x / y << " " << y << endl;
        cout << 1LL * a * b << " " << a << " " << a + (a * b) * 1LL << endl;
    }
    return 0;
}