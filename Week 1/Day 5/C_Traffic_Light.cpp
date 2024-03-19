#include <iostream>
#include <vector>
#include <string>
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
        char c;
        string s;
        cin >> n >> c >> s;
        s += s;
        int sz = s.size();
        int trac[sz];
        int cnt = 0;
        for (int i = sz - 1; i >= 0; i--)
        {
            if (s[i] == 'g')
            {
                cnt = 0;
            }
            else
            {
                cnt++;
            }
            trac[i] = cnt;
        }
        int ans = 0;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == c)
            {
                ans = max(ans, trac[i]);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
