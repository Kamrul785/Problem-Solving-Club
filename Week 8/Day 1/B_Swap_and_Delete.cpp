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
        string s;
        cin >> s;
        int one = 0, zero = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
                one++;
            else
                zero++;
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                if (zero != 0)
                {
                    zero--;
                }
                else
                {
                    break;
                }
            }
            else if (s[i] == '0')
            {
                if (one != 0)
                {
                    one--;
                }
                else
                {
                    break;
                }
            }
        }
        cout << (one + zero) << endl;
    }
    return 0;
}