#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fl float
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x;
    cin>>n;
    vector<int>v(1000000);
    int j=1;
    for(int i =1;i<=n;i++){
        cin>>x;
        while(x--){
            v[j] = i;
            j++;
        }
    }
    int q;
    cin>>q;
    while(q--){
        int idx;
        cin>>idx;
        cout<<v[idx]<<endl;
    }
    
    return 0;
}