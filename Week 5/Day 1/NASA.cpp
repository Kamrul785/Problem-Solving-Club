#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fl float
using namespace std;
int maxN = (1 << 15);
vector<int> all_palindrome;
void mark_palindrome()
{
    for (int i = 0; i < maxN; i++)
    {
        string s = to_string(i);
        int l = s.length();
        bool ok = true;
        for (int j = 0; j < (l / 2); j++)
        {
            if (s[j] != s[l - j - 1])
            {
                ok = false;
                break;
            }
        }
        if (ok)
            all_palindrome.push_back(i);
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    mark_palindrome();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>cnt(maxN),a(n);
        for(int i =0;i<n;i++){
            cin>>a[i];
            cnt[a[i]]++;
        }
        ll ans = n;
        for(int i =0;i<n;i++){
            for(int j = 0 ;j<all_palindrome.size(); j++){
                int curr = a[i] ^ all_palindrome[j];
                ans += cnt[curr];
            }
        }
        cout<<(ans/2)<<endl;
    }
    return 0;
}