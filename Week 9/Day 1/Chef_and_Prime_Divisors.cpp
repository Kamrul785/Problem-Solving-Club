#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fl float
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        bool ok = true;
        for (ll i = 2; i * i <= b; i++)
        {
            if (b % i == 0)
            {
                if (a % i != 0)
                {
                    ok = false;
                    break;
                }
                while (b % i == 0)
                {
                    b /= i;
                }
            }
        }
        if(b > 1){
            if(a % b != 0) ok = false;
        }
        if (ok)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}