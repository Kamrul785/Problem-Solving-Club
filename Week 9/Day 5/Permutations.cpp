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
    if(n == 1){
        cout<<1<<endl;
        return 0;
    }
    if(n < 4){
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }
    for(int i = n ; i>=1; i--){
        if(i % 2 == 1){
            cout<<i<<" ";
        }
    }
    for(int i = n ; i>=1; i--){
        if(i % 2 == 0){
            cout<<i<<" ";
        }
    }
    return 0;
}