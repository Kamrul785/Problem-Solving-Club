#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fl float
using namespace std;
const int N = 1e6 + 5;
vector<int> v[N];
vector<ll>leaf;
void dfs(int src , int par){
    bool flag = false;
    for(auto child:v[src]){
        if(child == par) continue;
        flag = true;
        dfs(child,src);
        leaf[src]+=leaf[child];
    }
    if(!flag){
        leaf[src] = 1;
    }
}
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
        int e = n - 1;
        for(int i=0;i<=n;i++) v[i].clear();
        leaf.assign(n+2,0);
        while (e--)
        {
            int a, b;
            cin >> a >> b;
            v[a].push_back(b);
            v[b].push_back(a);
        }
        dfs(1,-1);
        int q;
        cin >> q;
        while (q--)
        {
            int x, y;
            cin >> x >> y;
            //cout<<x<<" "<<y<<endl;
            ll ans = leaf[x]*leaf[y];
            cout<<ans<<endl;
        }

    }
    return 0;
}