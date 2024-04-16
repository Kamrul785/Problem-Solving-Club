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
        int x;
        cin>>x;
        int a,b,bit = 0;
        while((1 << bit) <= x){
            bit++;
        }
        int m = (1 << bit-1);
        a = m;
        b = a^x;
        cout<<b<<" "<<a<<endl;
    }
    return 0;
}