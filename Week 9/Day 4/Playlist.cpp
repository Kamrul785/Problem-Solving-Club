#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fl float
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = 0, idx = 0;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        while (s.count(a[i]))
        {
            s.erase(a[idx]);
            idx++;
        }
        s.insert(a[i]);
        ans = max(ans, (int)s.size());
    }
    cout << ans << endl;
    return 0;
}