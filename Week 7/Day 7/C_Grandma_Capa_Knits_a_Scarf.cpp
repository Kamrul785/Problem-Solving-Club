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
        string s;
        cin >> s;

        int ans = INT_MAX;
        for (int i = 0; i < 26; i++)
        {
            int cnt = 0;
            bool ok = true;
            int j = 0, r = n - 1;
            while (j <= r)
            {
                if (s[j] != s[r])
                {
                    if (s[j] == char(i + 'a'))
                    {
                        j++;
                        cnt++;
                    }
                    else if (s[r] == char(i + 'a'))
                    {
                        r--;
                        cnt++;
                    }
                    else
                    {
                        ok = false;
                        break;
                    }
                }
                else
                {
                    j++, r--;
                }
            }
            if (ok)
            {
                ans = min(ans, cnt);
            }
        }
        if (ans == INT_MAX) ans = -1 ;
        cout<<ans<<endl;
    }
    return 0;
}