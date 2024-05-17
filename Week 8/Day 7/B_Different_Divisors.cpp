#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fl float
using namespace std;
const int n = 1e6;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v;
    vector<bool> prime(n + 1, true);
    for (int i = 2; i <= n; i++)
    {
        if (prime[i])
        {
            for (int j = i + i; j <= n; j += i)
            {
                prime[j] = false;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (prime[i])
            v.push_back(i);
    }
    int t;
    cin >> t;
    while (t--)
    {
        int d;
        cin >> d;
        int ans = 1, j = -1;
        for (int i = 0; v.size(); i++)
        {
            if (v[i] - 1 >= d)
            {
                ans *= v[i];
                j = v[i];
                break;
            }
        }
        for (int i = 0; v.size(); i++)
        {
            if (v[i] - j >= d)
            {
                ans *= v[i];
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}