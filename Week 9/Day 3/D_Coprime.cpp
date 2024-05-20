#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fl float
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> chek[1005];
    for (int i = 1; i <= 1000; i++)
    {
        for (int j = 1; j <= 1000; j++)
        {
            if (__gcd(i, j) == 1)
            {
                chek[i].push_back(j);
            }
        }
    }

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        vector<int> mxid(1005, -1);
        for (int i = 1; i <= n; i++)
        {
            mxid[a[i]] = i;
        }
        int ans = 0;
        for (int i = 1; i <= 1000; i++)
        {
            if (mxid[i] == -1)
                continue;
            if (i == 1)
            {
                ans = max(ans, 2 * mxid[i]);
                continue;
            }
            for (auto x : chek[i])
            {
                if (mxid[x] != -1)
                {
                    ans = max(ans, mxid[i] + mxid[x]);
                }
            }
        }
        if (ans == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }

    return 0;
}