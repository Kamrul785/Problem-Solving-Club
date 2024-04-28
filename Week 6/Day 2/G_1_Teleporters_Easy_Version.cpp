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
        int n, c;
        cin >> n >> c;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            a[i] += (i + 1);
        }
        sort(a.begin(), a.end());
        int sum = 0;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (sum + a[i] > c)
            {
                break;
            }
            sum += a[i];
            cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}