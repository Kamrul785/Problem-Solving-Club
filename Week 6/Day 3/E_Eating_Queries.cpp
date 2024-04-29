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
        int n, q;
        cin >> n >> q;
        vector<int> a(n), pre(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end(), greater<int>());
        pre[0] = a[0];
        for (int i = 1; i < n; i++)
        {
            pre[i] = a[i] + pre[i - 1];
        }
        
        while (q--)
        {
            int x;
            cin >> x;
            int l = 0, r = n-1 ;
            int ans = -1;
            while (l <= r)
            {
                int mid = (l + r) / 2;
                if (pre[mid] >= x)
                {
                    ans = mid+1;
                    r = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}