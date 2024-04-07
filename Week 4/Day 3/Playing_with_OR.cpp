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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int l = 0, r = 0, ans = 0;
        int odd = 0;
        while (r < n)
        {
            if(a[r] % 2 == 1) odd++;
            if(r-l+1 == k){
                if(odd>=1) ans++;
                if(a[l] % 2 == 1) odd--;
                l++;
            }
            r++;
        }
        cout<<ans<<endl;
    }
    return 0;
}