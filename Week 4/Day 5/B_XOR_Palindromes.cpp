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
        int n;
        cin>>n;
        string s;
        cin>>s;
        string ans = {};
        int bug = 0;
        int gdpair = 0;
        int i = 0,j = n-1;
        while(i<j){
            if(s[i] == s[j]){
                gdpair+=2;
            }
            else{
                bug++;
            }
            i++,j--;
        }
        for(int i =0;i<= n;i++){
            int total = i;
            total -= bug;
            if(total < 0){
                ans.push_back('0');
                continue;
            }
            total = max((total%2) , total - gdpair);
            total = max((total - (n%2)), 0);
            if(total == 0){
                ans.push_back('1');
            }
            else{
                ans.push_back('0');
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}