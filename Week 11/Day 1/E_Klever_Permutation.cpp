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
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>ans(n+1);
        int l = 1 , r= n;
        for(int i = 1; i<= k;i++){
            for(int j = i ; j<= n;j+= k){
                if(i&1) ans[j] = l++;
                else ans[j] = r--;
            }
        }
        for(int i = 1;i<= n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}