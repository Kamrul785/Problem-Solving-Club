#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fl float
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, a, b;
    cin >> n >> a >> b;

    int l = 1, r = min(a, b);
    int ans = 0;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if ((a / mid) + (b / mid) >= n)
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans << endl;
    return 0;
}