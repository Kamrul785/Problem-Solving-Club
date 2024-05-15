#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fl float
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        int m = n / 2;
        cout << m << endl;
        for (int i = 0; i < m; i++)
        {
            cout << 2 << " ";
        }
        cout << endl;
    }
    else if (n == 3)
    {
        cout << 1 << endl
             << 3 << endl;
    }
    else
    {
        n = n - 3;
        int m = n / 2;
        cout << m + 1 << endl;
        for (int i = 0; i < m; i++)
        {
            cout << 2 << " ";
        }
        cout << 3 << endl;
    }
    return 0;
}