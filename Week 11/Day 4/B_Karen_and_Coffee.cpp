#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fl float
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll N =  2e5+5;
    int n,k,q;
    cin>>n>>k>>q;
    vector<int>a(N);
    for(int i = 0;i<n;i++){
        int l,r;
        cin>>l>>r;
        a[l]++;
        a[r+1]--;
    }
    int cnt = 0;
    for(int i = 0;i<N;i++){
        cnt += a[i];
        if(cnt >= k){
            a[i] = 1;
        }
        else{
            a[i] = 0;
        }
    }
    vector<ll>pre(N);
    for(int i = 0;i<N;i++){
        pre[i] = pre[i-1]+a[i-1];
    }
    while(q--){
        int l,r;
        cin>>l>>r;
        cout<<pre[r+1] - pre[l]<<endl;
    }
    return 0;
}