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
        int q;
        cin >> q;
        int first = -1, last = -1, flag = 0;
        while (q--)
        {
            int num;
            cin >> num;
            if (flag)
            {
                if (num >= last && num <= first)
                {
                    last = num;
                    cout << 1;
                }
                else
                {
                    cout << 0;
                }
            }
            else
            {
                if (first == -1)
                {
                    first = num;
                    last = num;
                    cout << 1;
                }
                else if (num >= last)
                {
                    last = num;
                    cout << 1;
                }
                else if (num <= first)
                {
                    flag = 1;
                    last = num;
                    cout << 1;
                }
                else
                {
                    cout << 0;
                }
            }
        }
        cout << endl;
    }
    return 0;
}