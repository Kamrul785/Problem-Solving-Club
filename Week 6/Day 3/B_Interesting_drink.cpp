#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fl float
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i =0 ;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    int q;
    cin>>q;
    while (q--)
    {
        int x;
        cin>>x;
        int l = 0,r = n-1;
        int ans = -1;
        while(l<=r){
            int mid = (l+r)/2;
            if(a[mid]<=x){
                ans = mid;
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }
        if(ans == -1)cout<<0<<endl;
        else cout<<ans+1<<endl;
    }
    
    return 0;
}