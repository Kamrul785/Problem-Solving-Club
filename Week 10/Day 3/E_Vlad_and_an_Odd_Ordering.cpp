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
        int n, k;
        cin >> n >> k;
        vector<int> cnt(29, 0);
        for (int i = 0; i < 30; i++)
        {
            cnt[i] = n / (1 << i);
        }
        for (int i = 0; i < 29; i++)
        {
            cnt[i] -= cnt[i + 1];
        }
        for (int i = 0; i < 30; i++)
        {
            if (k > cnt[i])
            {
                k -= cnt[i];
            }
            else
            {
                cout << (1 << i) + (1 << (i + 1)) * (k - 1) << endl;
                break;
            }
        }
    }
    return 0;
}