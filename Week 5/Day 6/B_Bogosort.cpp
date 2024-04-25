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
        cin>>n;
        vector<int>a(n);
        for(int i =0 ;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end(),greater<int>());
        for(auto x:a) cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}