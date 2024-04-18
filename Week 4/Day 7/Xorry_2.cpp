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
        int k = 1,cnt = 0;
        while (k * 2 <= n)
        {
            k *= 2;
            cnt++;
        }
        bool ok = false;
        int ans = 1;
        for(int i = cnt - 1; i>= 0 ; i--)
        {
            if (n & (1 << i))
                ok = true;
            else
            {
                if (ok)
                {
                    ans *= 2;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}