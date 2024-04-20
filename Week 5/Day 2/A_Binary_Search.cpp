#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fl float
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    while (q--)
    {
        int k;
        cin >> k;
        int l = 0, r = n - 1;
        bool ok = false;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (k == a[mid])
            {
                cout << "YES" << endl;
                ok = true;
                break;
            } 
            else if (k < a[mid])
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        if (!ok)
            cout << "NO" << endl;
    }
    return 0;
}