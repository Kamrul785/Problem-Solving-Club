#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fl float
#define faster ios::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int ans = INT_MIN;
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        ans = a[n-1] - a[0];
        for(int i = 1;i < n; i++){
            ans = max(ans,(a[n-i] - a[0]));
        }
        for(int i = 0;i<n-1; i++){
            ans = max(ans,(a[n-1]-a[i]));
        }
        for(int i = 1; i<n; i++){
            ans = max(ans,(a[i-1] - a[i]));
        }
        cout << ans << endl;
    }
    return 0;
}