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
        int c = n-1;
        if(n == 2){
            cout<<0<<" "<<1<<endl;
            continue;
        }
        while(c > 1){
            cout<<c<<" ";
            if((__lg(c)) != (__lg(c-1))) break;
            c--;
        }
        for(int i = 0 ;i<c;i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}