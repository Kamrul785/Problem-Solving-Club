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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        unordered_map<int, int> mp;
        for (auto x : a)
        {
            mp[x]++;
        }
        int mex = -1;
        for (int i = 0; i <= n; i++)
        {
            if (mp[i] == 0)
            {
                mex = i;
                break;
            }
        }
        int mex2 = 0, first_one = 0;
        for (int i = 0; i <= n; i++)
        {
            if (mp[i] == 1)
            {
                first_one = i;
                break;
            }
        }
        for (int i = first_one + 1; i <= n; i++)
        {
            if (mp[i] <= 1)
            {
                mex2 = i;
                break;
            }
        }
        int ans = min(mex, mex2);
        cout << ans << endl;
    }
    return 0;
}