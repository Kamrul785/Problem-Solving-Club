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
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin>>a[i];
        map<int,int>freq;
        for(int x:a){
            freq[x]++;
        }
        sort(a.begin(),a.end());
        int ans = 0;
        for(int i =0 ;i<n;i++){
            int x = a[i];
            if(freq[a[i]] > 0){
                ans++;
                while(freq[x] > 0){
                    freq[x]--;
                    x++;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}