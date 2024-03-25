#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<string> v(n);
        int mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int cnt = 0;
                for (int k = 0; k < m; k++)
                {
                    cnt += abs(v[i][k] - v[j][k]);
                }
                mn = min(mn, cnt);
            }
        }
        cout << mn << endl;
    }
    return 0;
}