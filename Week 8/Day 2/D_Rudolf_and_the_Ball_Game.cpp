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
        int n, m, x;
        cin >> n >> m >> x;
        vector<int> v(m);
        vector<char> b(m);
        for (int i = 0; i < m; i++)
        {
            cin >> v[i] >> b[i];
        }
        set<ll> ans;
        ans.insert(x);
        for (int i = 0; i < m; i++)
        {
            if (b[i] == '0')
            {
                set<ll> tans;
                for (auto it : ans)
                {
                    ll a = it + v[i];
                    if (a > n)
                        a -= n;
                    tans.insert(a);
                }
                ans = tans;
            }
            else if (b[i] == '1')
            {
                set<ll> tans;
                for (auto it : ans)
                {
                    ll a = it - v[i] + n;
                    if (a > n)
                        a -= n;
                    tans.insert(a);
                }
                ans = tans;
            }
            else
            {
                set<ll> tans;
                for (auto it : ans)
                {
                    ll a = it + v[i];
                    if (a > n)
                        a -= n;
                    tans.insert(a);
                    a = it - v[i] + n;
                    if (a > n)
                        a -= n;
                    tans.insert(a);
                }
                ans = tans;
            }
        }
        cout << ans.size() << endl;
        for (auto it : ans)
        {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}