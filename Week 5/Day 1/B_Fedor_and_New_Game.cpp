#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fl float
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>a(m+1);
    for(int i =0; i<m+1;i++) cin>>a[i];
    vector<vector<int>>all_marks;
    for(int i = 0 ;i<=m; i++){
        vector<int>v;
        for(int k = 0; k<n ; k++){
            if((a[i] >> k) & 1){
                v.push_back(1);
            }
            else{
                v.push_back(0);
            }
        }
        all_marks.push_back(v);
    }
    vector<int>fedor = all_marks[m];
    int ans = 0 ;
    for(int i = 0; i<all_marks.size() - 1; i++){
        int cnt = 0;
        vector<int>v = all_marks[i];
        for(int k =0;k<n;k++){
            if(fedor[k] != v[k]){
                cnt++;
            }
        }
        if(cnt <= k) ans++;
    }
    cout<<ans<<endl;
    return 0;
}