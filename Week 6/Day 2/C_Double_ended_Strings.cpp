#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fl float
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        int ans = 0;
        int n = a.size(),m = b.size();
        for(int i = 0 ; i <n; i++){
            for(int j = 0; j<m; j++){
                if(a[i] == b[j]){
                    int l = i , r = j;
                    int cnt = 0;
                    while(l < n && r < m){
                        if(a[l] == b[r]){
                            cnt++;
                        }
                        else{
                            break;
                        }
                        l++,r++;
                    }
                    ans = max(ans,cnt);
                }
            }
        }
        cout<<(n+m)- (2*ans)<<endl;
    }
    return 0;
}