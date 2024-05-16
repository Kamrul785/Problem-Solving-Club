#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define fl float
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll l, r;
    cin >> l >> r;
    cout << "YES" << endl;
    for (ll i = l; i <= r; i+=2)
    {
        cout<<i<<" "<<i+1<<endl;
    }
    return 0;
}