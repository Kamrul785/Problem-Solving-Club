#include<bits/stdc++.h>
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
        string s1,s2;
        cin>>s1>>s2;
        bool flag = true;
        //cout<<s1<<endl<<s2<<endl;
        for(int i = 0;i<n;i++){
            if(s1[i] == 'R' && s2[i] != 'R'){
                flag = false;
            }
            else if(s2[i] == 'R' && s1[i] != 'R'){
                flag= false;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}