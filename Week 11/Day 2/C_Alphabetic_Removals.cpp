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
    int n, k;
    cin >> n >> k;
    string s,ans;
    cin >> s;
    map<char, int> cnt;
    for (auto x : s)
    {
        cnt[x]++;
    }
    for (auto c = 'a'; c <= 'z'; c++)
    {
        if (k < 1)
            break;
        if (cnt[c] > k)
        {
            cnt[c] -= k;
            k = 0;
        }
        else
        {
            k -= cnt[c];
            cnt[c] = 0;
        }
    }
    for(int i = n-1; i>= 0 ;i--){
        if(cnt[s[i]] > 0){
            ans.push_back(s[i]);
            cnt[s[i]]--;
        }
    }
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;
    return 0;
}