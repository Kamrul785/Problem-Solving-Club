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
        int gcd1 = 0, gcd2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                gcd1 = __gcd(a[i], gcd1);
            }
            else
            {
                gcd2 = __gcd(a[i], gcd2);
            }
        }
        bool oka = true, okb = true;
        for (int i = 1; i < n; i += 2)
        {
            if (a[i] % gcd1 == 0)
            {
                oka = false;
                break;
            }
        }
        for (int i = 0; i < n; i += 2)
        {
            if (a[i] % gcd2 == 0)
            {
                okb = false;
                break;
            }
        }
        if (!oka && !okb)
            cout << 0 << endl;
        else if (!oka)
            cout << gcd2 << endl;
        else
            cout << gcd1 << endl;
    }
    return 0;
}