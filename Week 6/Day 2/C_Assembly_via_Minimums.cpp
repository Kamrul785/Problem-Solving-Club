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
        int m = (n * (n - 1)) / 2;
        vector<int> a, b(m);
        for(int i = 0 ;i<m;i++) cin>>b[i];
        sort(b.begin(),b.end());
        for(int i = 0;i<m; i+=--n){
            cout<<b[i]<<" ";
        }
        cout<<1000000000<<endl;
    }
    return 0;
}